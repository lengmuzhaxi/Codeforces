#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n%2)
		{
			cout << "NO\n";
		}
		else
		{
			int k = n / 2;
			cout << "YES\n";
			while (k--)
			{
				cout << "AAAB";
			}
			cout << "\n";
		}
	}
}