#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n);
        cout<<a[n]+a[n-1]<<"\n";
    }
}
