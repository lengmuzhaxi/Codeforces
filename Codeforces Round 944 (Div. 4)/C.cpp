#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int j=min(a,b),i=max(a,b);
        int p=max(c,d),o=min(c,d);
        if((p>=i&&o<=i&&o>=j)||(p<=i&&o<=j&&p>=j))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
}
//
// Created by dzl on 24-5-16.
//
