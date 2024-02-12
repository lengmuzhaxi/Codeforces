#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if ((a % 2 == 0 && 2 * b != a) || (b % 2 == 0 && 2 * a != b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}