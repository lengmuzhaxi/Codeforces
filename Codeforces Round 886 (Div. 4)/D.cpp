#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef long long ll; 
//int main()
//{
//	ll t = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll n = 0,cnt=0,k=0,m=0;
//		cin >> n>>k;
//		ll a[10] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a, a + n);
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (a[i + 1] - a[i] <= k)
//			{
//				cnt++;
//			}
//			else
//			{
//				cnt = 0;
//			}
//			m = max(m, cnt);
//		}
//		cout << n-m-1<< endl;
//	}
//}