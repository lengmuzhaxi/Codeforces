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
//		int n=0, k=0, first = 1, last = 1, i;
//		cin >> n >> k;
//		vector<int> v(n);
//		for (i = 0; i < n; i++) 
//		{
//			cin >> v[i];
//		}
//		for (i = 1; i < n; i++) 
//		{
//			if (first == k)
//				break;
//			if (v[i] == v[0])
//			{
//				first++;
//			}
//		}
//		for (; i < n - 1; i++) 
//		{
//			if (last == k)
//				break;
//			if (v[i] == v[n - 1])
//			{
//				last++;
//			}
//		}
//		if ((v[0] == v[n - 1] && first == k) || (first == k && last == k))
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//
//	return 0;
//}