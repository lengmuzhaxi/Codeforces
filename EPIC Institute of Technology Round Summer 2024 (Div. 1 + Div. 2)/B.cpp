#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],cnt=0,coin=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll pref_max = 0, s = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            pref_max = max(pref_max,  a[i]);
            ll d = pref_max - a[i];
            s += d;
            mx = max(mx, d);
        }

        cout << s + mx << endl;
    }
}