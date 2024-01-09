#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, cnt = 0, sum = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '-')
            {
                sum++;
            }
            else
            {
                cnt++;
            }
        }
        cout << abs(cnt - sum) << '\n';
    }
}