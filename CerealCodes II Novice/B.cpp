#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, k = 0;
		cin >> n >> k;
		vector<string>s(n+2);
		if (k % 2)
		{
			cout << "NO";
		}
		else
		{
			cout << "YES" << '\n';
			for (int i = 1; i <= n; i++)
			{
				if (i <= k / 2)
				{
					s[i] ='0';
				}
				else
				s[i] ='1';
			}
		}
		for (int i = 1; i <=n; i++)
		{
			cout << s[i];
		}
		cout << '\n';
	}
}