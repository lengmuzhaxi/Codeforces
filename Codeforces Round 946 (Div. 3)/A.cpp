#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        int r=ceil(y/2);
        int k= ceil((x+y*4)/15);
        cout<<max(r,k)<<endl;


    }
}