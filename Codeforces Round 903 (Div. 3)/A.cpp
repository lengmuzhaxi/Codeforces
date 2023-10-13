#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int a = 0, b = 0,cnt=0,f=0;
//		cin >> a >> b;
//
//		string m, n;
//		cin >> m >> n;
//		if (m == n|| m.find(n) != string::npos)
//		{
//			cout << 0 << '\n';
//		}
//		else
//		{
//				for (int i = 0; i < 6; i++)
//				{
//					if (m.find(n) == string::npos)
//					{
//						m += m;
//						cnt++;
//					}
//					else
//					{
//						f = 1;
//						break;
//					}
//				}
//				if (f)
//				{
//					cout << cnt << '\n';
//				}
//				else
//				{
//					cout << -1 << '\n';
//				}
//		}
//	}
//}