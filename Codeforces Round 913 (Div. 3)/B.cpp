#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string s;
//		cin >> s;
//		int cnt = 0, n = s.size(), res = 0;
//		for (int i = n-1; i >=0; i--)
//		{
//			if (s[i] == 'b')
//			{
//				cnt++;
//				s[i] = '0';
//			}
//			if (s[i] == 'B')
//			{
//				res++;
//				s[i] = '0';
//			}
//			if (s[i] >= 'A' && s[i] <= 'Z' && res > 0)
//			{
//				res--;
//				s[i] = '0';
//			}
//			if (s[i] >= 'a' && s[i] <= 'z' && cnt > 0)
//			{
//				cnt--;
//				s[i] = '0';
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (s[i] != '0')
//			{
//				cout << s[i];
//			}
//		}
//		cout << '\n';
//	}
//}