#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<numeric>
using namespace std;
typedef long long ll;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}

	return gcd(b, a % b);
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() 
{
	int T=0;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		set<int> s, pre;
		for (auto x : a) 
		{
			set<int> p;
			s.insert(x);
			p.insert(x);
			for (auto y : pre) 
			{
				ll t = lcm(x, y);
				if (t <= 1e9) 
				{
					s.insert(t);
					p.insert(t);
				}
			}
			pre = p;
		}
		int ans = 1;
		while (s.count(ans)) 
		{
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
