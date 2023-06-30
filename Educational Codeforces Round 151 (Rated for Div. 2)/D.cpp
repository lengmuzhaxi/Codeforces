#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0;
        cin >> n;
        vector<ll>a(n);
        for (ll& x : a)
        {
            cin >> x;
        }
        ll  sum = 0, k = 0, x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            k = max(k, sum);
            x = k - sum;
            if (x > y)
            {
                y = x;
                z = k;
            }
        }
        cout << z << endl;
    }
}
      