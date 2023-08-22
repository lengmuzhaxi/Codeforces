#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, sum = 0,cnt=0;
		cin >> n;
		vector<ll>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] < 0)
			{
				cnt++;
				a[i] = -a[i];
			}
			sum += a[i];
		}
		sort(a.begin(), a.end());
		if (cnt & 1)
		{
			sum -= 2 * a[0];
		}
		cout << sum << '\n';
	}
}