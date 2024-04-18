#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        int z = -1,x = a[0],b = 0;
        for(int i = 0;i<n;i++){
            if(a[i] != x)
            {
                if(z == -1)z = b;
                else z=min(z,b);
                b = 0;
            }else b++;
        }
        cout<<min(z,b)<<endl;
    }
    return 0;
}