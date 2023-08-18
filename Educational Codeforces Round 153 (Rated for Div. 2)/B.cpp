#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//using ll = long long;
//int main()
//{
//	ll t = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll n = 0, m = 0, k = 0, q = 0;
//		cin >> n >> m >> k >> q;
//		ll t = max(n - k, 0ll);
//		ll p = (t + m-1) / m;
//		if (p * m > n)
//		{
//			p--;
//		}
//		ll j = n - p * m;
//		cout << max(j - k, 0ll) + max(p - q, 0ll) << '\n';
//	}
//}