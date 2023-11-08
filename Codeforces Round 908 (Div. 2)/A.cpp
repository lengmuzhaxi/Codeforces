#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, cnt = 0;
		cin >> n;
		string s;
		cin >> s;
		int l = 0, r = n - 1;
		while (l < r)
		{
			cnt += (s[l++] != s[r--]);
		}
		string res(n + 1, '0');
		if (n & 1)
		{
			for (int i = cnt; i <= n - cnt; ++i)
				res[i] = '1';
		}
		else
		{
			for (int i = cnt; i <= n - cnt; i += 2)
			{
				res[i] = '1';
			}
		}
		cout << res << '\n';
	}
}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0, cnt = 0, ans = 0;
//		string s;
//		cin >> n;
//		cin >> s;
//		cout << s.back() << '\n';
//	}
//}