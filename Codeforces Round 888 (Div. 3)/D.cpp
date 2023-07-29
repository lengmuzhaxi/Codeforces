#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
typedef long long ll;
using namespace std;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0,last=0;
		cin >> n;
		set<int>s;
		for (int i = 0; i < n - 1; i++)
		{
			ll x = 0;
			cin >>x;
			if (x-last<= n)
			{
				s.insert(x - last);
			}
			last = x;
		}
		if (s.size() == n - 2 + (last != (ll)n * (n + 1) / 2))
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}
}