//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		vector<int>a(n);
//		int l = 0, r = n - 1;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		while (a[l] >= 0 && l <= r - 2)
//		{
//			a[l + 1] -= 2 * a[l];
//			a[l + 2] -= a[l];
//			a[l] = 0;
//			l++;
//		}
//		if (l == r - 1 && a[l] == 0 && a[r] == 0)
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//}