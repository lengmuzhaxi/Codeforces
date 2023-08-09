#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		int a[2000] = { 0 }, b[2000] = { 0 };
		for (int i = 1; i <=n; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> b[i];
		}
		int m = INT_MIN,cnt = 0;
		for (int i = 1; i <=n; i++)
		{
			m = max(m, a[i] - b[i]);
		}
		for (int i = 1; i <= n; i++)
		{
			cnt += (a[i] - b[i] == m);
		}
		cout << cnt << "\n";
		for (int i = 1; i <= n; i++)
		{
			if (a[i] - b[i] == m)
			{
				cout << i << ' ';
			}
		}
		cout << '\n';
	}
}