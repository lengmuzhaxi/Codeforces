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
        ll b[1000], n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n - 1; i++)
        {
            sum += (b[i + 1] - b[i]);
        }
        cout << sum << "\n";
    }
}