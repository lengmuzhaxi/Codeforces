#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;
int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n; 
        string s; 
        cin >> s;
        long long count = 0;
        set<char>mp;
        for (char i : s)
        {
            mp.insert(i);
            count += mp.size();
        }
        cout << count << endl;
    }
}