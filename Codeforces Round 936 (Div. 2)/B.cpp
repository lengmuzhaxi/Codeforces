#include<iostream>
#include<algorithm>
#include<vector>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>a(n);
        ll sum = 0, m = 0, p = 1e9 + 7, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            m += a[i];
            if (m < 0)
            {
                m = 0;
            }
            s = max(m, s);
        }
        m = s;
        sum -= s;
        for (int i = 0; i < k; i++)
        {
            m = m * 2 % p;
        }
        sum = ((sum + m) % p + p) % p;
        cout << sum << "\n";
    }
}