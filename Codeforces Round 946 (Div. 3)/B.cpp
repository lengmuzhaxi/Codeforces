#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        map<char,int> se;
        for(auto i: s) se[i] = 0;
        vector<char> re;
        int ind = 0;
        for(auto i : se){
            re.push_back(i.first);
            se[i.first] = ind++;
        }
        for(auto i : s) cout<<re[re.size()-1-se[i]];
        cout<<endl;

    }
    return 0;
}
//
// Created by dzl on 24-5-23.
//
