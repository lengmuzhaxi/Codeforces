#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.rbegin(), v.rend());
        int ans=0;
        for(int i=0; i<(n-1); i+=2){
            ans+=(v[i]-v[i+1]);
        }
        if(ans<=k) ans=0;
        else ans=ans-k;
        if(n%2 == 1) ans+=v.back();
        cout<<ans<<endl;
    }
    return 0;
}