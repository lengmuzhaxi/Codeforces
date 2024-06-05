#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a>=b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        int a[105];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int tmp=a[f-1];
        a[f-1]=0;
        sort(a,a+n,cmp);
        if(tmp<a[k-1]) cout<<"NO"<<endl;
        else if(tmp>a[k-1]) cout<<"YES"<<endl;
        else if(tmp==a[k-1]) cout<<"MAYBE"<<endl;
    }
}
//
// Created by dzl on 24-6-5.
//
