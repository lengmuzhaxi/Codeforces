#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int t=0;
//	cin >> t;
//	while (t--)
//	{
//		int n=0,k=0,res=0;
//		cin >> n >> k;
//		vector<int>a(n+1),s(n+1),h(n+1);
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//			s[i] = s[i - 1] + a[i];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> h[i];
//		}
//		for (int i = 1, j = 1; j <= n;)
//		{
//			if (h[j - 1] % h[j] != 0)
//			{
//				i = j;
//			}
//			    j++;
//			while (s[j - 1] - s[i - 1] > k)
//			{
//				i++;
//			}
//			res = max(j - i, res);
//		}
//		cout << res << '\n';
//	}
//}