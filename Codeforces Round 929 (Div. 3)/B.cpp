#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int sum = 0;
        int flag = 0;
        for (int i = 0; i < n; i++) 
        {
            int k;
            cin >> k;
            sum += k;
            if (k % 3 == 1)
            {
                flag = 1;
            }
        }
        if (sum % 3 == 0)
        {
            cout << "0" << endl;
        }
        else if (sum % 3 == 2 || flag)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}