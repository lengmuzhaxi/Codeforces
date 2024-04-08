#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int first = n, second = n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int own = a[k-1];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > own && first == n)
            {
                first = i;
            }
            else if (a[i] > own && second == n)
            {
                second = i;
            }
        }
        cout << max(first-1, min(second, k-1) - first - (first==0)) << "\n";
    }
}