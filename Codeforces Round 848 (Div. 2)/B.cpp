#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0, m = 0, d = 0,ans=1e9;
//		cin >> n >> m >> d;
//		vector<int>p(n + 1), a(n + 1),pos(n+1);
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> p[i];
//			pos[p[i]] = i;
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 1; i < m; i++) 
//		{
//			if (pos[a[i + 1]] <= pos[a[i]] || pos[a[i + 1]] - pos[a[i]] > d) {
//				ans = 0;
//				break;
//			}
//			ans = min(ans, pos[a[i + 1]] - pos[a[i]]);
//			int dist = pos[a[i + 1]] - pos[a[i]];
//			int swapNeed = d - dist + 1;
//			int swapPossible = (pos[a[i]] - 1) + (n - pos[a[i + 1]]);
//			if (swapPossible >= swapNeed)
//			{
//				ans = min(ans, swapNeed);
//			}
//			cout << ans << '\n';
//		}
//	}
//}