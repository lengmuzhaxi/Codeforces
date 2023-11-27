#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, cnt = 0,res=0;
		string s;
		string t = "...";
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '.' && s[i + 1] == '.' && s[i+2] == '.')
			{
				cnt++;
			}
			else
			{
				if (s[i] == '.')
				{
					res++;
				}
			}
		}
		if (cnt > 0)
		{
			cout << 2 << '\n';
		}
		else
		{
			cout << res << '\n';
		}
	}
}