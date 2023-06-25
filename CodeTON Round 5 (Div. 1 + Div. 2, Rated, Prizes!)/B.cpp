#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	/*int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, x = 0, now = 0, a[4][100010] = { 0 };
		cin >> n >> x;
		for (int  i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= n; j++) 
			{
				if ((x & a[i][j]) == a[i][j])
				{
					now |= a[i][j];
				}
				else
				{
					break;
				}
			}
		}
		if (now == x)
		{
			cout << "Yes"<<endl;
		}
		else
		{
			cout << "No"<<endl;
		}
	}*/
	cout << (2 & -2);
}

