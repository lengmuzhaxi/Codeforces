#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0,m=0;
//	cin >> n;
//	vector<int>a(n + 2),b(n+2,0);
//	for (int i = 0; i < n-1; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i <n-1; i++)
//	{
//			b[i + 1] = a[i] ^ b[i];
//	}
//    for (int i = 0; (1 << i) < n; ++i)
//    {
//        int c = 1 << i, d = 0;
//        for (int j = 0; j < n; ++j)
//        {
//            if ((c & b[j]) != 0)
//            {
//                d++;
//            }
//        }
//        if (d * 2 > n) m += c;
//    }
//    b[0] = m;
//    for (int i = 0; i < n; i++)
//    {
//        cout << b[i] << " ";
//        b[i + 1] = b[i] ^ a[i];
//    }
//}