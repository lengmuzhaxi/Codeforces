#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	int f[100] = { 0 };
//	f[0] = 0, f[1] = 1;
//	for (int i = 2; i <= 45; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	while (t--)
//	{
//		int n = 0, m = 0;
//		cin >> n >> m;
//		if (m < 45)
//		{
//			int l = n / f[m], cnt = 0;
//			for (int i = 0; i <= l; i++)
//			{
//				if ((n - f[m - 2] * i) % f[m - 1] == 0)
//				{
//					cnt++;
//				}
//			}
//			cout << cnt << '\n';
//		}
//		else
//		{
//			cout << 0 << '\n';
//		}
//	}
//}