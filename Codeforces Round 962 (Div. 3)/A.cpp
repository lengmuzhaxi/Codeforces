#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,cnt=0;
        cin>>n;
        while(n>=4)
        {
            n-=4;
            cnt++;
        }
        cnt+=n/2;
        cout<<cnt<<'\n';
    }
}