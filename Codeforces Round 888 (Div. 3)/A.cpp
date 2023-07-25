#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, m = 0, k = 0, h = 0, cnt = 0, a[50] = { 0 },g=0;
		cin >> n >> m >> k >> h;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			ll j = abs(h - a[i]);
			if (j>0&&j % k == 0 && j / k <= m)
			{
				if(max(j,g)<m*k)
				{
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}
