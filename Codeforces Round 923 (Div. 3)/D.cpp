#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main() 
{
	ll t;
	cin >> t;
	while (t--) 
	{
		ll n;
		cin >> n;
		vector <ll> a(n), ans;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 1; i < n; i++)
		{
			if (a[i] != a[i - 1])
				ans.push_back(i + 1);
		}
		ans.push_back(INT_MAX);
		ll q;
		cin >> q;
		while (q--) 
		{
			ll l, r;
			cin >> l >> r;
			ll temp = *upper_bound(ans.begin(), ans.end(), l);
			if (temp > r || temp == INT_MAX)
				cout << "-1 -1" << endl;
			else
				cout << temp - 1 << " " << temp << endl;
		}
		cout << endl;

	}
	return 0;
}