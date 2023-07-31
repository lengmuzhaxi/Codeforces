#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll t = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll m = 1, a[50] = { 0 }, n = 0;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//			if (abs(a[i]) > abs(a[m]))
//			{
//				m = i;
//			}
//		}
//		cout << 2 * n - 2 << '\n';
//		for (int i = 1; i <= n; i++)
//		{
//			if (i != m)
//			{
//				cout << i << ' ' << m << '\n', a[i] += a[m];
//			}
//		}
//		if (a[m] >= 0)
//		{
//			for (int i = 2; i <= n; i++)
//			{
//				cout << i << ' ' << i - 1 << '\n', a[i] += a[i - 1];
//			}
//		}
//		else 
//		{
//			for (int i = n - 1; i >= 1; i--)
//			{
//				cout << i << ' ' << i + 1 << '\n', a[i] += a[i + 1];
//			}
//		}
//	}
//}