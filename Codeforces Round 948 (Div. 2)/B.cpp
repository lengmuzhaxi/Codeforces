#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int> a;
        while ( k> 0)
        {
            if (k & 1)
            {
                if ((k >> 1) & 1)
                {
                    a.push_back(-1);
                    k= (k >> 1) + 1;  // Shift right and handle the carry
                } else
                {
                    a.push_back(1);
                    k >>= 1;  // Just shift right
                }
            }
            else
            {
                a.push_back(0);
                k >>= 1;  // Shift right
            }
        }
        while (!a.empty() && a.back() == 0)
        {
            a.pop_back();
        }
        int n = a.size();
        cout << n << endl;
        for (int ai : a) {
            cout << ai << " ";
        }
        cout << endl;
    }
}//
// Created by dzl on 24-5-29.
//
