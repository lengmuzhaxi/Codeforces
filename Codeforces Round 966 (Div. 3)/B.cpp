/*
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        set<int> occupied;
        bool followsRules = true;
        for (int i = 0; i < n; ++i) {
            int seat = a[i];
            if (i == 0) {

                occupied.insert(seat);
            } else {

                if (occupied.count(seat - 1) == 0 && occupied.count(seat + 1) == 0) {
                    followsRules = false;
                    break;
                }
                occupied.insert(seat);
            }
        }

        if (followsRules) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
*/
