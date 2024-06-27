/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s,c;
        int num;
        cin>>s;
        set<int>st;
        for(int i=0;i<m;i++)
        {
            cin>>num;
            st.insert(num);
        }
        cin>>c;
        sort(c.begin(),c.end());
        int len=0;
        for(auto it:st)
        {
            s[it-1]=c[len++];
        }
        cout<<s<<endl;
    }
}*/