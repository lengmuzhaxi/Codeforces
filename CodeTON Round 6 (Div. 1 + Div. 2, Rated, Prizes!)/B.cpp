#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, m = 0, cnt = 0, ans = 0, x = 0, k = 0;
		cin >> n >> m;
		vector<ll>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			cnt ^= a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >>x ;
			k |= x;
		}
		for (int i = 0; i < n; ++i)
		{
			ans ^= a[i] | k;
		}
		cout << min(ans,cnt) << " " <<max(ans,cnt)<< ' ' << '\n';
	}
}