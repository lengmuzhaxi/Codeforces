#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,h,sum=0;
        cin>>r;
        h=r;
        for(int i=0 ;i<=r;i++)
        {
            while(i*i+h*h>=(r+1)*(r+1))
            {
                h--;
            }
            int l=h;
            while(i*i+l*l>=r*r && l>0)
            {
                l--;
                sum++;
            }
        }
        cout <<sum*4<<endl;
    }
}
//
// Created by dzl on 24-5-19.
//
