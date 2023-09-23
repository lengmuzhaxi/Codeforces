#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using ll = long long;
//using namespace std;
//int main()
//{
//	ll t = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll n = 0, x = 0;
//		cin >> n >> x;
//		vector<ll>a(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		ll l = 0, h = 2000000007;
//		while (l < h)
//		{
//			ll mid = l + (h - l + 1) / 2,sum=0;
//			for (int i = 0; i < n; i++)
//			{
//				sum += max(mid - a[i], 0LL);
//			}
//			if (sum <= x)
//			{
//				l = mid;
//			}
//			else
//			{
//				h = mid - 1;
//			}
//		}
//		cout << l << '\n';
//	}
//}