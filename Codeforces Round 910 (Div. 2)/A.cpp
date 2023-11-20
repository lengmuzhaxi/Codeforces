#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int cnt = 0, n=0,k=0;
//		cin >> n >> k;
//		string s;
//		cin >> s;
//		int m = count(s.begin(), s.end(), 'B');
//		if (m == k)
//		{
//			cout << 0 << '\n';
//		}
//		else
//		{
//			for (int i = n - 1; i >= 0; i--)
//			{
//				if (s[i] == 'B')
//				{
//					cnt++;
//				}
//				if (cnt > k) 
//				{
//					cout << 1 << '\n' << i + 1 << ' ' << 'A'<<'\n';
//					break;
//				}
//				else if (i + 1 == k - cnt) 
//				{
//					cout << 1 << '\n' << i + 1 << ' ' << 'B'<<'\n';
//					break;
//				}
//			}
//		}
//	}
//}
