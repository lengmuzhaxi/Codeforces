#include <iostream>
using namespace std;
int p[200007];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        int l = 0, r = n + 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = i; j <= n; j += k)
            {
                if (i & 1)
                {
                    p[j] = (++l);
                }
                else
                {
                    p[j] = (--r);
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << (p[i]) << " \n";
        }
    }
}
