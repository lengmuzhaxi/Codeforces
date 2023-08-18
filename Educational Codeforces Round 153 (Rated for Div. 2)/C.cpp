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
		int m = n + 1, r = n + 1, cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			int x = 0;
			cin >> x;
			if (x < m)
			{
				m = x;
				cnt++;
			}
			else if (x < r)
			{
				r = x;
			}
			else
			{
				cnt++;
			}
		}
		cout << n - cnt << '\n';
	}
}