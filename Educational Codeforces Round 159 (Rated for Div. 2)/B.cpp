#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using ll = long long;
using namespace std;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, p = 0, l = 0, t = 0,ans=0;
		cin >> n >> l >> t >> p;
		ll m = ceil((n - 1) / 7) + 1;
		if ((2 * (l - m * p) / t) <= m) 
		{
			ans = n - 1 - (l - 1) / (t + 2 * p);
		}
		else 
		{
			ans = n - 1 - (l - m * p- 1) / t;
		}
		cout << ans << endl;
		cout << ans << endl;
		
	}
}