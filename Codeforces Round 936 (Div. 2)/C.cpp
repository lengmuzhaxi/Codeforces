#include<iostream>
#include<vector>
const int N = 1e5;
using namespace std;
vector<int>g[N];
int t, ans;
int dfs(int u, int f = -1) 
{
    int sm = 1;
    for (int v : g[u])
    {
        if (v != f)
        {
            sm += dfs(v, u);
        }
    }
    return sm >= t ? ans++, 0 : sm;
}
int main() 
{
    int cas, n, k, l, r;
    for (cin >> cas; cas--;) 
    {
        cin >> n >> k, l = 1, r = n;
        for (int u, v, i = 1; i < n; i++)
        {
            cin >> u >> v,
                g[--u].push_back(--v),
                g[v].push_back(u);
        }
        while (r - l > 1)
        {
            t = l + r >> 1,
                dfs(ans = 0), (ans > k ? l : r) = t;
        }
        printf("%d\n", l);
        for (int i = 0; i < n; i++)
        {
            g[i].clear();
        }
    }
}