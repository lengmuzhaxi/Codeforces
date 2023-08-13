#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//typedef long long ll;
//using namespace std;
//int main()
//{
//	ll t = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll n = 0, a[100] = { 0 };
//		cin >> n;
//		ll cnt = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a + 1, a + n + 1);
//		if (a[n] == a[1]) 
//		{ 
//			cout << -1 << '\n'; 
//		continue; 
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (a[i] == a[1])
//			{
//				cnt++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		cout << cnt << ' ' << n - cnt << '\n';
//		for (int i = 1; i <= n; i++)
//		{
//			cout << a[i] << ' ';
//			if (i == cnt)
//			{
//				cout << '\n';
//			}
//		}
//	}
//}