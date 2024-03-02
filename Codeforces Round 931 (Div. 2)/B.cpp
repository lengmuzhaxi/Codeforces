#include<iostream>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d = n / 15;
        int r = n % 15;
        int a[] = { 0,1,2,1,2,1,1,2,2,2,1,2,2,2,3 };
        if (n == 5 || n == 8)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << d + a[r] << endl;
        }
    }
    return 0;
}

