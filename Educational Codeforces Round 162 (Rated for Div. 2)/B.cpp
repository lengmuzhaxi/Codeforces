#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> m(n);
        for (int i = 0; i < n; i++) 
        {
            int a;
            cin >> a;
            m[i].second = a;
        }
        for (int i = 0; i < n; i++) 
        {
            int a;
            cin >> a;
            m[i].first = abs(a);
        }
        sort(m.begin(), m.end());
        long long sum = 0;
        int flag = 0;
        for (auto it : m) 
        {
            sum += it.second;
            if (sum > 1LL * it.first * k) 
            {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (!flag) 
        {
            cout << "YES" << endl;
        }
    }
}