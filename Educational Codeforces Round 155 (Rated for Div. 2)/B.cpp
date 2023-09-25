#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using ll = long long;
using namespace std;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, sa = 0, sb = 0;
		vector<ll>a(n), b(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sa += a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			sb += b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		cout << min(sa + n * b[0], sb + n * a[0]) << '\n';
	}
}