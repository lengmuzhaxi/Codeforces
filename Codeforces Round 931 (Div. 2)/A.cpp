#include<iostream>
#include<algorithm>
using ll = long long;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, a[1000] = { 0 };
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        sum += (abs(a[0] - a[n - 2]) + abs(a[n - 2] - a[1]) + abs(a[n - 1] - a[1]) + abs(a[n - 1] - a[0]));
        cout << sum << '\n';
    }
}
