#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int a = 0, b = 0, c = 0;
//        cin >> a >> b >> c;
//        if (a == b)
//        {
//            cout << 0 << '\n';
//        }
//        else if ((c >= max(b, a)) && a != b)
//        {
//            cout << 1 << '\n';
//        }
//        else
//        {
//            int k = (a + b) / 2;
//            int m = max(a, b);
//            cout << ((m - k) % c == 0 ? (m - k) / c : (m - k) / c + 1) << '\n';
//        }
//    }
//}