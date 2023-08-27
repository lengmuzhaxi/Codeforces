#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int a[100] = { 0 }, cnt[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int x : a)
		cnt[__builtin_ctz(x)]++;
}
//int main()
//{
//	int t = 0, x = 0, y = 0, n = 0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> x >> y >> n;
//		if ((n - 1) * n / 2 + x <= y)
//		{
//			int num = n - 1;
//			cout << x << " ";
//			x = y - (n - 1) * n / 2 + (n - 1);
//			for (int i = 2; i <= n; i++)
//			{
//				cout << x << " ";
//				num--;
//				x += num;
//			}
//			cout << endl;
//		}
//		else
//		{
//			cout << "-1" << endl;
//		}
//	}
//}