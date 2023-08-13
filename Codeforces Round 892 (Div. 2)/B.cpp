#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll min1 = 1e18, min2 = 1e18, n = 0,m=0,sum=0;
		cin >> m;
		while (m--)
		{
			cin >> n;
			vector<ll>a(n);
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			sort(a.begin(), a.end());
			sum += a[1];
			min1 = min(min1, a[1]);
			min2 = min(a[0], min2);
		}
		cout << sum - min1 + min2 << '\n';
	}
}