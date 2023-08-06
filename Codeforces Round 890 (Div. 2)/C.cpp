#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int a[1000] = { 0 };
bool p(int i, int val, int k, int n)
{
	if (i == n) 
	{
		return false;
	}
	if (a[i] >= val) 
	{
		return true;
	}
	if (val - a[i] > k) 
	{
		return false;
	}
	return p(i + 1, val - 1, k - val + a[i], n);
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, k = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int ans = 1, r = 1e9, l = 0;
		for (int i = 0; i < n; i++)
		{
			while (l < r)
			{
				int m = (r + l + 1) / 2;
				if (p(i, m, k, n))
				{
					l = m;
				}
				else
				{
					r = m - 1;
				}
			}
			ans = max(ans, l);
		}
		cout << ans << '\n';
	}
}