#include<bits/stdc++.h>
using namespace std;
int t,n;
string s,r;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>r;
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(s[i-2]=='x'&&s[i-1]=='.'&&s[i]=='x'&&r[i-2]=='.'&&r[i-1]=='.'&&r[i]=='.')ans++;
            if(r[i-2]=='x'&&r[i-1]=='.'&&r[i]=='x'&&s[i-2]=='.'&&s[i-1]=='.'&&s[i]=='.')ans++;
        }
        cout<<ans<<endl;
    }

}
//
// Created by dzl on 24-8-2.
//
