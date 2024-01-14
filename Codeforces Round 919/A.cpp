//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n=0,l=1,r=1e9,cnt=0;
//		cin >> n;
//		vector<int>b(n);
//		while (n--)
//		{
//			int a, x;
//			cin >> a >> x;
//			if (a == 1)
//			{
//				l = max(l, x);
//			}
//			if (a == 2)
//			{
//				r = min(r, x);
//			}
//			if (a == 3)
//			{
//				b.push_back(x);
//			}
//		}
//		for (int x : b)
//		{
//			if (x >= l && x <= r)
//			{
//				cnt++;
//			}
//		}
//		cout << max(r - l + 1 - cnt, 0) << '\n';
//	}
//}