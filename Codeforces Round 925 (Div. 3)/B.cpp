//#include<iostream>
//#include<vector>
//using ll = long long;
//using namespace std;
//int  main()
//{
//    ll t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int n, k = 0,  f = 0;
//        cin >> n;
//        ll sum = 0;
//        vector<ll>a(n+1);
//        for (int i = 1; i <=n; i++)
//        {
//            cin >> a[i];
//            sum += a[i];
//        }
//        for (int i = 1; i < n; i++) 
//        {
//           k += a[i];
//            if (k < (sum/n) * i) 
//            {
//                cout << "NO\n";
//                f = 1;
//                break;
//            }
//        }
//        if (f == 0) 
//        {
//            cout << "YES\n";
//        }
//    }
//}