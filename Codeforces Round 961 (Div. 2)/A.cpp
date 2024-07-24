#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, num = 0;
        cin >> x >> y;
        while (y>0)
        {
            y -= x;
            num++;
            if (num % 2 != 0)
                x--;
        }
        cout << num << endl;
    }
}