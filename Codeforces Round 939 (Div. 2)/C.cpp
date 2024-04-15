#include <bits/stdc++.h>
using namespace std;
#define int long long
int T,n;
signed main(){
    cin>>T;
    while(T--){
        cin>>n;
        cout<<n*(n+1)*(2*n+1)/3-n*(n+1)/2<<" "<<2*n<<endl;
        for(int i=n;i;i--){
            cout<<1<<" "<<i;
            for(int j=1;j<=n;j++) cout<<" "<<j;
            cout<<endl<<2<<" "<<i;
            for(int j=1;j<=n;j++) cout<<" "<<j;
            cout<<endl;
        }
    }
    return 0;
}