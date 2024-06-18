#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        ll m;
        cin>>n>>m;
        ll max_s = 0;
        for (int i = 0; i < n; i++)
        {
            max_s += abs(n - 1 - i - i);
        }
        if (m % 2||m>max_s)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "Yes\n";
            vector<int> p(n);
            m /= 2;
            iota(p.begin(), p.end(), 0);

            for (int i = 0; m > 0; i++)
            {
                if (m>= n - 1 - 2 * i)
                {
                    swap(p[i], p[n - 1 - i]);
                    m-= n - 1 - 2 * i; // 更新剩余的 m
                }
                else
                {
                    swap(p[i], p[i + m]);
                    m = 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << p[i] + 1 << " ";
            }
            cout<<"\n";
        }
    }
}