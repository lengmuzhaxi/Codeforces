#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    string jewels, stones;
    cin >> jewels;
    cin >> stones;
        long long mask = 0;
    for (char c : jewels)
        mask |= 1LL << (c & 63);
    int ans = 0;
   for (char c : stones)
        ans += mask >> (c & 63) & 1;
    return ans;
}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		cin >> n;
//		int m = 1e9;
//		for (int i = 0; i < n; i++)
//		{
//			int a = 0, b = 0;
//			cin >> a >> b;
//			m = min(m, a + (b - 1) / 2);
//		}
//		cout << m << endl;
//	}
//}