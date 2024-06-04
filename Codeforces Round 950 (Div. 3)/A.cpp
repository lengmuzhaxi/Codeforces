#include <iostream>

using namespace std;

int main()
{
    long long t,n,m,c;
    string s;
    cin>>t;
    while (t--)
    {
        c=0;
        int a[7]={0};
        cin>>n>>m>>s;
        for (int i=0;i<n;i++)
            a[s[i]-65]++;
        for (int i=0;i<7;i++)
            if (a[i]<m)
                c+=m-a[i];
        cout<<c<<endl;
    }
    return 0;
}
//
// Created by dzl on 24-6-4.
//
