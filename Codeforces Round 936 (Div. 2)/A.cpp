#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n=0;
		cin >> n;
		int cnt = 0;
		vector<int>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int k = (n - 1) / 2 + 1;
		a[k-1] += 1;
		for (int i = k-1; i < n-1; i++)
		{
			if (a[i] > a[i + 1])
			{
				a[i+1]++;
				cnt++;
			}
		}
		cout << cnt+1 << '\n';
	}
}