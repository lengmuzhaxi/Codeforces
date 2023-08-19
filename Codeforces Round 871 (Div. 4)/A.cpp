#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s, c = "codeforces";
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < c.size(); i++)
		{
			if (s[i] != c[i])
			{
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}