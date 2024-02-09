#include<iostream>
#include<vector>
#include<set>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<int>a(n), b(m);
        set<ll>c, d, e;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
            {
                c.insert(a[i]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= k)
            {
                d.insert(b[i]);
            }
        }
        for (ll x : d)
        {
            e.insert(x);
        }
        for (ll x : c)
        {
            e.insert(x);
        }
        ll sum = 0;
        for (ll x : e)
        {
            sum += x;
        }
        if (e.size() == k && c.size() >= k / 2 && d.size() >= k / 2 && sum == (k * (k + 1)) / 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}