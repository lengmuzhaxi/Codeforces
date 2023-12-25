#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, cnt = 0, f = 0;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                cnt++;
            }
            if (a[i] == 0)
            {
                f = 1;
            }
        }
        if (f || cnt % 2 == 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << "1\n";
            cout << n << ' ' << 0 << '\n';
        }
    }
}