#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, j = 1;
		cin >> n >> k;
		if (k == 1)
		{
			while (j <= n)
			{
				cout << j << ' ';
				j++;
			}
			cout << '\n';
		}
		else if (n == k)
		{
			while (k--)
			{
				cout << 1 << ' ';
			}
			cout << '\n';
		}
		else
		{
			cout << "-1\n";
		}
	}
}