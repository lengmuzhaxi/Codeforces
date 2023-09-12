#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x = 0, y = -1, a[100010] = { 0 }, n = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != i)x = min(x, i);
        }
        while (y != -1)
        {
            cout << x << '\n';
            cin >> y;
            x = y;
        }
    }
}