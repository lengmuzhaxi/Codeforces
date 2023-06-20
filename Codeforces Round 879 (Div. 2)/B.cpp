#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int ans = 0, flag = 0;
//		string s, r;
//		cin >> s >> r;
//		while (s.length() < r.length())
//		{
//			s = '0' + s;
//		}
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (flag == 0)
//			{
//				if (r[i] != s[i])
//				{
//					ans += abs(s[i] - r[i]);
//					flag = 1;
//				}
//			}
//			else
//			{
//				ans += 9;
//			}
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}
//#include<iostream>//
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string l, r;
//		cin >> l >> r;
//		l = (r.size() - l.size(), '0') + l;
//		int n = r.length(), p = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (r[i] == l[i])
//			{
//				p++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		int ans = r[p] - l[p];
//		ans += (n - p) * 9;
//		cout << ans << endl;
//	}
//	return 0;
//}