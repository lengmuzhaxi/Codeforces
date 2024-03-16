#include<iostream>
using namespace std;
int main()
{
	int n, t;
	cin >> t;
	while (t--)
	{
		bool f = 1;
		cin >> n;
		int k = 0, cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			if ((x % 10) >= (x / 10) && (x / 10) >= k)
			{
				k = x % 10;
			}
			else if (x < k && f)
			{
				cout << "NO\n";
				f = 0;
			}
			else
			{
				k = x;
			}
		}
		if (f)
		{
			cout << "YES\n";
		}
	}
}