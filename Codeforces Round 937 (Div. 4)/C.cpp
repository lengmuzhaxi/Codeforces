#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T=1;
    cin>>T;
    while(T--)
    {
        int h,m;
        char c;
        cin>>h>>c>>m;
        string s=(h>=12?"PM":"AM");
        if(h==0||h==12) h=12;
        else h%=12;
        printf("%02d:%02d ",h,m);
        cout<<s<<endl;
    }
    return 0;
}