#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<(n-1+k-2)/(k-1)<<'\n';
    }
}
