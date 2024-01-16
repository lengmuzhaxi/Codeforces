#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        vector<int> x(n);
        vector<int>y(m);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> y[i];
        }
        sort(y.rbegin(), y.rend());
        sort(x.begin(), x.end());
        long long ans = 0;
        for (int i = 0; i < n; i++) 
        {
            ans += max(abs(x[i] - y[i]), abs(x[i] - y[m - n + i]));
        }
        cout << ans << endl;
    }
}
