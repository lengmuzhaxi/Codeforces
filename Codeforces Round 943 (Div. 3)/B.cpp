#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string a;string b;
        cin>>a>>b;
        int c=0;
        for(int i=0;i<m;i++){
            if(b[i]==a[c]){
                c++;
            }

        }
        cout<<c<<endl;
    }
}//
// Created by dzl on 24-5-10.
//
