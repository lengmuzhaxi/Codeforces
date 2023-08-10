#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		vector<ll>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		cout<<max(a[0] * a[1], a[n - 1] * a[n - 2])<<'\n';
	}
}