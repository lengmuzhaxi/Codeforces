#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        bool ans=true;
        while(x>=10)
        {
            if (x % 10 == 9)
            {
                ans = false;
                break;
            }
            x /= 10;
            x--;
        }
        cout << (ans && x == 0 ? "YES\n" : "NO\n");
    }
}
