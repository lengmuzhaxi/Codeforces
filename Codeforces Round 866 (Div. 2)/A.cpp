#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int cnt = 0;
		if (s == "^")
		{
			cout << 1 << '\n';
		}
		if (s[0] == '_')
		{
			cnt++;
		}
		if (s.back() == '_')
		{
			cnt++;
		}
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] == '_' && s[i + 1] == '_')
			{
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}