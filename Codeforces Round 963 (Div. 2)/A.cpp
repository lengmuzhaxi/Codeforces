/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<char,int>mp;
        for (int i=0;i<n*4;i++){
            char c;
            cin>>c;
            if(c=='?'){
                continue;
            }
            mp[c]++;
        }
        int s=0;
        for(auto &t:mp){
            s+=min(t.second,n);
        }
        cout<<s<<endl;
    }
}
*/
