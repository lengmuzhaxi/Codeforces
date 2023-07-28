#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, k = 0, a[300005] = { 0 };
		pair<int, int>b[300005];
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			a[i] %= k;
			if (a[i] == 0)
			{
				a[i] = k;
			}
			b[i].first = a[i];
			b[i].second = n - i + 1;
		}
		sort(b+1, b + n+1);
		for (int i = n; i >= 1; i--)
		{
			cout << n - b[i].second + 1 << " ";
		}
		cout << '\n';
	}
}