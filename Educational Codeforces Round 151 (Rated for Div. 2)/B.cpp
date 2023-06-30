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
//		ll a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0,ans=1;
//		cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
//		if (( c1< a1 && b1 < a1) || (c1 > a1 && b1 > a1))
//		{
//			ans += min(abs(b1 - a1), abs(a1 - c1));
//		}
//		if ((c2 < a2 && b2 < a2) || (b2 > a2 && c2 > a2))
//		{
//			ans += min(abs(a2 - b2), abs(a2- c2));
//		}
//		cout << ans << '\n';
//	}
//}