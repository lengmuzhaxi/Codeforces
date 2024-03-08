#include<iostream>
#include<algorithm>
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
        string k = s;
        reverse(k.begin(), k.end());
        cout << min(s, k + s) << "\n";
    }
}