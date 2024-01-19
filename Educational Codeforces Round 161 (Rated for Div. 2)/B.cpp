#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
using ll = long long;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        ll a[1000];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a , a + n );
        map<ll, ll>m;
        ll ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            ll k = i ;
            m[a[i]] += k;
            if (a[i] == a[i + 1]) ans += m[a[i]];
        }
        cout << ans << endl;
    }
}
