#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string s;
//		cin >> s;
//		int n = s.size();
//		int cur =n;
//		for (int i = n - 1; i > 0; i--)
//		{
//			if (s[i] >= '5')
//			{
//				s[i - 1]++;
//				cur = i;
//			}
//		}
//		if (s[0] >= '5')
//		{
//			s = '1' + s;
//			cur = 1;
//		}
//		for (int i = cur; i <= n; i++)
//		{
//			s[i] = '0';
//		}
//		cout << s << "\n";
//	}
//}