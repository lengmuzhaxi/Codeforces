#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		string s, r;
		ll m = 0, k = 0, n = 0;
		cin >> n;
		cin >> s >> r;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != r[i])
			{
				m++;
			}
			if (s[i] != r[n - 1 - i])
			{
				k++;
			}
		}
		if (m == 0)
		{
			cout << 0 << endl;
		}
		else if (k == 0)
		{
			cout << 2 << endl;
		}
		else
		{
			ll x = (m % 2 == 0) ? (2 * m) : (2 * m - 1);
			ll y = (k % 2 == 1) ? (2 * k) : (2 * k - 1);
			cout << min(x, y) << endl;
		}
	}
	return 0;
}