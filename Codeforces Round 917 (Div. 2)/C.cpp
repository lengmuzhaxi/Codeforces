#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int>a(n), b(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        long long int ans = 0;
        for (int i = 0; i < min(d, 100002); i++) 
        {
            int k1 = b[i % k];
            long long int cnt = 0;
            for (int i1 = 0; i1 < n; i1++) 
            {
                if (a[i1] == i1 + 1)
                {
                    cnt++;
                }
            }
            ans = max(ans, cnt + ((d - 1 - i) * 1ll) / (1ll * 2));
            for (int j = 0; j < k1; j++)
            {
                a[j]++;
            }
        }
        cout << ans << endl;
    }
}