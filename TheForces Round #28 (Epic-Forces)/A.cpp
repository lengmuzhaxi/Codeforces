#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, curr = 1, cost = 0;
        cin >> n >> k;
        bool change = 0;
        while (k > 0)
        {
            k--;
            cost += curr;
            if (change)
                curr++;
            change = 1 - change;
        }
        cout << cost << '\n';
    }
}