#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int a[210] = { 0 }, n = 0, sum = 0;
		cin >> n;
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> a[i];
		}
		sort(a, a +2*n);
		for (int i = 0,j=i+1; i < n,j<n; i++,j++)
		{
				sum += abs(a[i] - a[j]);
		}
		for (int i = n,j=i+1; i < 2*n,j<n*2; i++,j++)
		{
				sum += abs(a[i] - a[j]);
		}
		cout << sum<< '\n';
		for (int i = 0, j = 2 * n - 1; i < n&&j >= n; i++, j--)
		{
			cout << a[i] << ' ' << a[j] << '\n';
		}
	}
}