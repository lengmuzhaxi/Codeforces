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
		ll n = 0, m = 0, k = 0, sum = 0;
		cin >> n >> m >> k;
		vector<ll> a(n), b(m);
		for (ll& i : a)
		{
			cin >> i;
		}
		for (ll& i : b)
		{
			cin >> i;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (a[0] < b[m - 1])
		{
			swap(a[0], b[m - 1]);
		}
		if (k % 2 == 0)
		{
			sort(a.begin(), a.end());
			sort(b.begin(), b.end());
			swap(b[0], a[n - 1]);
		}
		for (ll i : a)
		{
			sum += i;
		}
		cout << sum << '\n';
	}
}