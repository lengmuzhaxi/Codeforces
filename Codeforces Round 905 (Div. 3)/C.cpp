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
		ll n = 0, k = 0;
		int ans = 0;
		cin >> n >> k;
		vector<int>a(n+1);
		for (int i = 1; i <= n; i++) 
		{
			cin >> a[i];
			a[i] = (k - a[i] % k) % k;
		}
		sort(a.begin(),a.end());
		ans = a[1];
		if (k == 4) 
		{
			k = 2;
			for (int i = 1; i <= n; i++) 
			{
				a[i] = (k - a[i] % k) % k;
			}
			sort(a.begin(), a.end());
			ans = min(ans, a[1] + a[2]);
		}
		cout << ans << "\n";
	}
	return 0;
}
