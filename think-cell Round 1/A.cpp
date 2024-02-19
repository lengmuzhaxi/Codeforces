#include<iostream>
#include<algorithm>
using ll = long long;
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, b[100] = { 0 };
        ll sum = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + 2 * n);
        for (int i = 0; i < 2 * n; i += 2)
        {
            sum += b[i];
        }
        cout << sum << '\n';
    }
}