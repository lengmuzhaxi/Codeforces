#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, k = 0, ans = 0, m = -1;
		cin >> n >> k;
		vector<int>a(n + 1), b(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> b[i];
			if (a[i] - 1 + i <= k)
			{
				if (b[i] > ans)
				{
					ans = b[i];
					m = i;
				}
			}
		}
		cout << m << '\n';

	}
}