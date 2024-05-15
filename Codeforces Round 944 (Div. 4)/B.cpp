#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char>st;
        for(auto k:s)
        {
            st.insert(k);
        }
        if(st.size()==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<s[s.size()-1];
            for(int i=0;i<s.size()-1;i++)
            {
                cout<<s[i];
            }
            cout<<'\n';
        }
    }
}//
// Created by dzl on 24-5-15.
//
