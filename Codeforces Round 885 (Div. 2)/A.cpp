#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, m = 0, k = 0, x = 0, y = 0;
		cin >> n >> m >> k >> x >> y;
		string ans = "YES";
		for (int i = 0; i < k; i++)
		{
			int xi = 0, yi = 0;
			cin >> xi >> yi;
			if ((x + y) % 2 == (xi + yi) % 2)
			{
				ans = "NO";
			}
		}
		cout << ans << endl;
	}
}