#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll ans = 0, b = 1e9, c = 1e9;
		vector<ll>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (b > c)
			{
				swap(b, c);
			}
			if (a[i] <= b)
			{
				b = a[i];
			}
			else if (a[i] <= c)
			{
				c = a[i];
			}
			else
			{
				b = a[i];
				ans++;
			}
		}
		cout << ans << '\n';
	}
}