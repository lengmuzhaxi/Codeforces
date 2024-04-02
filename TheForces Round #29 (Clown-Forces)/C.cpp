#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;cin>>n;
    while(n--)
    {
        long long x,y;
        cin>>x>>y;
        if(x==0 && y==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        bool f=1;
        int l1=__lg(x);
        int l2=__lg(y);
        l1=max(l1,l2);
        for(int i=l1;i>=0;i--)
        {
            if((((x>>i)&1)^((y>>i)&1))==0)
            {
                f=0;break;
            }
        }

        if(f)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}