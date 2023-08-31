#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0, a = 0, q = 0,cnt=0;
//		cin >> n >> a >> q;
//		string s;
//		cin >> s;
//		int m = a, to= a;
//		for (auto c : s) 
//		{
//			to += c == '+';
//			a += (c == '+' ? 1 : -1);
//			m = max(a, m);
//		}
//		if (m == n)
//		{
//			cout << "YES" << '\n';
//		}
//		else
//		{
//			cout << (to >= n ? "MAYBE" : "NO") << '\n';
//		}
//	}
//}