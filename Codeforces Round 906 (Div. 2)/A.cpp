#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<vector>
using ll = long long;
using namespace std;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0,sum=0;
		cin >> n;
		vector<ll>a(n);
		map<int, int>m;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		if (m.size()==2&&((m[1]-m[2])==0|| (m[1] - m[2]) == 1))
		{
			cout << "YES\n";
		}
		else if (m.size() == 1)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}