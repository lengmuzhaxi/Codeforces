#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;cin>>a>>b;
        int m=a.size(),n=b.size();
        int c=m+n,k=0;
        for(int i=0;i<n;i++)
        {
            int c=0,d=i;
            for(int j=0;j<m;j++)
            {
                if(a[j]==b[d])
                {
                    c++;
                    d++;
                }
            }
            k=max(k,c);
        }
        cout<<c-k<<endl;
    }
    return 0;
}