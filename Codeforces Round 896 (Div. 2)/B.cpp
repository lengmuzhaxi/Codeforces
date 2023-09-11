#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, k = 0, s = 0,t = 0;
		cin >> n >> k >> s >> t;
		vector<int> x(n + 1), y(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> x[i] >> y[i];
		}
		ll ans = llabs(x[s] - x[t]) + llabs(y[s] - y[t]);
		ll a = LLONG_MAX/2, b= LLONG_MAX/2;
		for (int i = 1; i <= k; i++) 
		{
			a = min(a, llabs(x[s] - x[i]) + llabs(y[s] - y[i]));
			b = min(b, llabs(x[t] - x[i]) + llabs(y[t] - y[i]));
		}
		ans = min(ans, a + b);
		cout << ans << '\n';
	}
}