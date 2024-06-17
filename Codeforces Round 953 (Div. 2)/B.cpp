#include<bits/stdc++.h>
using namespace std;
long long T,n,a,b,k;
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>a>>b;
        k=min(max(0ll,b-a),n);
        cout<<(b+b-k+1)*k/2+(n-k)*a<<endl;
    }
    return 0;
}