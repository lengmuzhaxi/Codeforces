#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0,x=0,y=0,f=1;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'L')
			{
				x--;
			}
			else if (s[i] == 'R')
			{
				x++;
			}
			else if (s[i] == 'U')
			{
				y++;
			}
			else
			{
				y--;
			}
			if (x == 1 && y == 1)
			{
				f = 0;
			}
		}
		if (f)
		{
			cout << "NO" << '\n';
		}
		else
		{
			cout << "YES" << '\n';
		}
	}
}