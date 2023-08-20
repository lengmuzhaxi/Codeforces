#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
bool dfs(int n, int m)
{
    if (n == m)
    {
        return 1;
    }
    if (n % 3 != 0)
    {
        return 0;
    }
    return dfs(n / 3, m) || dfs(2 * (n / 3), m);
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        if (dfs(n, m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
