#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = -1e5, k = 1e5;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                k = min(i, k);
                m = max(m, i);
            }
        }
        if (m == k)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << m - k + 1 << '\n';
        }
    }
}