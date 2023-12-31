//#include<iostream>
//using ll = long long;
//using namespace std;
//ll lcm(ll a, ll b)
//{
//    ll greater = max(a, b);
//    ll smallest = min(a, b);
//    for (ll i = greater; ; i += greater) {
//        if (i % smallest == 0)
//            return i;
//    }
//}
//int main()
//{
//    ll t = 0;
//    cin >> t;
//    while (t--)
//    {
//        ll a, b;
//        cin >> a >> b;
//        ll k = lcm(a, b),j=min(a, b),m= max(a, b);
//        if (k -m == 0)
//        {
//            if (j!= 1 && (m%j== 0))
//            {
//                cout << (m/j)* k<<'\n';
//            }
//            else
//            {
//                cout << max(a, b) * k << '\n';
//            }
//        }
//        else
//        {
//            cout << k << '\n';
//        }
//    }
//}