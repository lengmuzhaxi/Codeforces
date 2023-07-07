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
//		int n = 0, k = 0, sum = 0, a[100] = { 0 }, b[100] = { 0 };
//		cin >> n >> k;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 1; i < n; i++)
//		{
//			b[i] = abs(a[i] - a[i-1]);
//		}
//		sort(b + 1, b + n);
//		for (int i = 1; i <= n - k; i++)
//		{
//			sum += b[i];
//		}
//		cout << sum << endl;
//	}
//}