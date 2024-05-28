#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Check if the difference is even
        if (abs(n - m) % 2 == 0 && n >= m) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
//
// Created by dzl on 24-5-28.
//
