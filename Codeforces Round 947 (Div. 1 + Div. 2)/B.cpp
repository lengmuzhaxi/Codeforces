/*#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while(t--){
        int n, d{0}, f{1};
        cin >> n;
        int a[n];
        for(int i{0}; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        for(int i{0}; i<n && f==1; i++){
            if(a[i]%a[0]!=0){
                if(d==0)
                    d=a[i];
                else if(a[i]%d!=0)
                    f=-1;
            }
        }
        if(f==-1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}*/