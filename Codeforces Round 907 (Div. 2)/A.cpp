#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int tt; cin >> tt;
//	while (tt--) {
//		int n; cin >> n;
//		vector<int> v(n);
//		for (auto& a : v) cin >> a;
//		int i = 0;
//		bool ans = true;
//		while (pow(2, i) <= n) 
//		{
//			for (int j = pow(2, i); j <= pow(2, i + 1) - 2; j++) 
//			{
//				if (j + 1 < n and v[j] > v[j + 1]) 
//				{
//					ans = false;
//					break;
//				}
//			}
//			i++;
//			if (!ans)break;
//		}
//		cout << (ans ? "YES" : "NO") << '\n';
//
//	}
//
//}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0, cnt = 0,a[1001]={0}, m = 0;
//	    cin >> n;
//		for (int i = 0; i <n; i++)
//		{
//			cin >> a[i];
//		}
//		string ans = "YES\n";
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (i & (i + 1))
//			{
//				if (a[i] > a[i + 1])
//				{
//					ans = "NO\n";
//				}
//			}
//		}
//		cout << ans ;
//	}
//}