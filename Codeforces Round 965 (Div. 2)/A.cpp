/*
#include <iostream>
using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;

    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;
        if(k%2==0)
        {
            for(int i=1;i<=k/2;i++)
            {
                cout<<xc+i<<' '<<yc+i<<'\n';
            }
            for(int i=1;i<=k/2;i++)
            {
                cout<<xc-i<<' '<<yc-i<<'\n';
            }
        }
        else
        {
            if(k==1)
            {
                cout<<xc<<' '<<yc<<'\n';
            }
            else
            {
                cout<<xc<<' '<<yc<<'\n';
                for(int i=1;i<=k/2;i++)
                {
                    cout<<xc+i<<' '<<yc+i<<'\n';
                }
                for(int i=1;i<=k/2;i++)
                {
                    cout<<xc-i<<' '<<yc-i<<'\n';
                }
            }
        }
    }
    return 0;
}
*/
