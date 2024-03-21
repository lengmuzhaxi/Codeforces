#include <iostream>
#include <cmath>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		s = ' ' + s + '0';
		int f[n + 5] = { 0 };
		for (int i = 1; i <= n + 1; i++)
		{
			f[i] = f[i - 1] + (s[i] - '0');
		}
		int p = -1;
		for (int i = 0; i <= n + 1; i++)
		{
			int l = i - f[i];
			int r = f[n + 1] - f[i];
			if (2 * l >= i && r * 2 >= n - i)
			{
				if (abs(n - 2 * i) < abs(n - 2 * p)) p = i;
			}

		}
		cout << p << endl;
	}
}