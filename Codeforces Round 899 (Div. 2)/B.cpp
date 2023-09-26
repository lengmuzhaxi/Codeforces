#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0,ans=0;
		cin >> n;
		vector<set<ll>>v(n);
		set<ll>a,b;
		for (int i = 0; i < n; i++)
		{
			ll k = 0;
			cin >> k;
			for (int j = 0; j < k; j++)
			{
				int m = 0;
				cin >> m;
				v[i].insert(m);
				a.insert(m);
			}
		}
		for (auto i : a)
		{
			for (int j = 0; j < n; j++)
			{
				if (v[j].find(i) == v[j].end())
				{
					b.insert(v[j].begin(), v[j].end());
				}
			}
			ans = max(ans, (ll)b.size());
			b.clear();
		}
		cout << ans<<'\n';
	}
}