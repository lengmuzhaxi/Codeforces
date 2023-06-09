#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t=0, n=0, k=0, q=0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> q;
        ll temp=0, count= 0,sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp <= q)
                count++;
            else
                count = 0;
            if (count >= k)
            {
                sum += (count - k + 1);
            }
        }
        cout << sum<< endl;
    }
    return 0;
}
