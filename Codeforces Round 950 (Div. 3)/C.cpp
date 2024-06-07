#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        map<int,int> mp;
        set<int> s;
        stack<int> st;

        int i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            s.insert(b[i]);
            if(b[i]!=a[i]) mp[b[i]]++;
        }
        int m;
        cin>>m;
        while(m--){
            int temp;
            cin>>temp;
            st.push(temp);
            if(mp.find(temp)!=mp.end()){
                mp[temp]--;
                if(mp[temp]==0) mp.erase(temp);
            }
        }
        if(!mp.empty()||s.find(st.top())==s.end()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}