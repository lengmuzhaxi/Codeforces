#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,m=0,j=0;
        cin>>n;
        string s;
        cin>>s;
        for( int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                m++;
                j=i;
            }
        }
        if((m==2&&s[j]==s[j-1])||m%2)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}