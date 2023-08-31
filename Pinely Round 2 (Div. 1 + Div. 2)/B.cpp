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
		int n = 0,cnt=0;
		cin >> n;
		vector<int>a(n + 1);
		for (int i = 1,j; i <= n; i++)
		{
			cin >> j;
			a[j] = i;
		}
		for (int i = 1; i < n; i++)
		{
			if (a[i] >a[i + 1])
			{
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}