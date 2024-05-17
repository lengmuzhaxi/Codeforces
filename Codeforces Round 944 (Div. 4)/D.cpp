#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt = 1;
        for(int i = 1; i < s.length(); ++i)
        {
            if(s[i] != s[i - 1]) cnt++;
        }
        cnt -= (s.find("01") != s.npos);
        cout << cnt << '\n';
    }
}//
// Created by dzl on 24-5-17.
//
