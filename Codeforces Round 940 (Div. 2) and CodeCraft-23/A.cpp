#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[105],sum=0;
        map<int,int>m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>=3)
            {
                sum+=(i.second/3);
            }
        }
        cout<<sum<<'\n';
    }
}