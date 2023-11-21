#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
using ll = long long;
int main()
{
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0, cnt = 0;
        stack<int>s;
        cin >> n;
        vector<ll>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        s.push(a[0]);
        for (int i = 1; i < n; i++)
        {
            ll t = s.top();
            if (t % 2 != a[i] % 2)
            {
                s.push(a[i]);
            }
            else
            {
                s.pop();
                s.push(t * a[i]);
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}