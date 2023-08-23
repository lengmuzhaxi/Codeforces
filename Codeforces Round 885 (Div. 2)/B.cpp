#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<queue>
//#define N 200005
//using namespace std;
//priority_queue<int>d[N];
//int n, k, t,l[N];
//int main() 
//{
//	int t = 0;
//	cin >> t;
//	while (t--) 
//	{
//		cin >> n >> k; 
//		int ans = n;
//		for (int i = 1, x; i <= n; i++)
//		{
//			cin >> x;
//			d[x].push(i - l[x] - 1);
//			l[x] = i;
//		}
//		for (int j = 1; j <= k; j++)
//		{
//			d[j].push(n - l[j]);
//			l[j] = 0;
//		}
//		for (int j = 1; j <= k; j++)
//		{
//			int x = d[j].top();
//			d[j].pop();
//			d[j].push(x / 2);
//			ans = min(ans, d[j].top());
//			while (!d[j].empty())
//			{
//				d[j].pop();
//			}
//		}
//		cout << ans << '\n';
//	}
//}