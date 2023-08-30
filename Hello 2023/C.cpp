#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() 
{
    int t=0; 
    cin >> t;
    while (t--) 
    {
        int n, m, c = 0;
        long long s = 0;
        cin >> n >> m;
        vector<int> a(n);
        for (auto& i : a)
        {
            cin >> i;
        }
        priority_queue<int> q;
        for (int i = m; i < n; i++) 
        {
            s += a[i]; if (a[i] < 0)q.emplace(-a[i] << 1);
            while (s < 0)
            {
                s += q.top();
                q.pop();
                c++;
            }
        }
        while (!q.empty())q.pop(); s = 0;
        for (int i = m - 1; i; i--) 
        {
            s += a[i]; 
            if (a[i] > 0)
            {
                q.emplace(a[i] << 1);
            }
            while (s > 0)
            {
                s -= q.top();
                q.pop();
                c++;
            }
        }
        cout << c << endl;
    }

}
