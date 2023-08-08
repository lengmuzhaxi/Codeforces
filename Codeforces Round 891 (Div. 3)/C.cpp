#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
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
		vector<int>a(n*(n-1)/2);
		for (int i = 0; i < n * (n - 1) / 2; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		for (int i = n-1; i >0; i--)
		{
			cout << a[cnt] << ' ';
			cnt += i;
		}
		cout << a[n * (n - 1) / 2-1] << '\n';
	}
}