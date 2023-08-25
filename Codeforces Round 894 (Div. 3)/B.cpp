#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		ll n = 0, x = 0;
//		cin >> n;
//		cin >> x;
//		ll prev = x;
//		n--;
//		vector<ll> ans,a(n);
//		ans.push_back(x);
//		for(int i=0;i<n;i++)
//		{
//			cin >> a[i];
//			if (a[i]< prev)
//			{
//				ans.push_back(a[i]);
//			}
//			ans.push_back(a[i]);
//			prev = a[i];
//		}
//		cout << ans.size() << endl;
//		for (ll x : ans)
//		{
//			cout << x << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}