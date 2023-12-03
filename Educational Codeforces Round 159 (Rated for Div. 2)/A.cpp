#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, sum = 0,cnt = 0;
		string s;
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
			{
				cnt++;
			}
			else
			{
				sum++;
			}
		}
		if (sum <= cnt)
		{
			cout << "YES\n";
		}
		else
		{
			if (sum == n)
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
	}
}