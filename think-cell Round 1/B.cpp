#include<iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int nm;
        cin >> nm;
        if (nm % 2 == 0)
        {
            for (int i = nm, j = 1; i > 1, j < nm; j += 2, i -= 2)
            {
                cout << i << ' ' << j << ' ';
            }
        }
        else
        {
            for (int i = nm, j = 2; i > 1, j < nm; j += 2, i -= 2)
            {
                cout << i << ' ' << j << ' ';
            }
            cout << 1;
        }
        cout << '\n';
    }
}