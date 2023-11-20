#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using ll = long long;
using namespace std;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, ans = 0;
		cin >> n;
		vector<ll>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = n - 2; i >= 0; i--)
		{
			if (a[i + 1] < a[i])
			{
				ll x = (a[i + 1] + a[i] - 1) / a[i+1];
				a[i] /= x, ans += x - 1;
			}
		}
		cout << ans << '\n';
	}
}