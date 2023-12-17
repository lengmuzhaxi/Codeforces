#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m[1000005], a = 0, b = 0, cnt = 0;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b;
            m[a]++;
            m[b]++;
        }
        for (int i = 1; i <= n; i++)
        {
            cnt += (m[i] == 1);
            m[i] = 0;
        }
        cout << (cnt + 1) / 2 << '\n';
    }
}