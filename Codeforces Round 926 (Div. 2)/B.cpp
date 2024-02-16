#include<iostream>
using ll = long long;
using namespace std;
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        ll n, m;
        cin >> n >> m;
        if (m < 4 * n - 2)
        {
            cout << (m - 1) / 2 + 1 << '\n';
        }
        else
        {
            cout << 2 * n << '\n';
        }
    }
}