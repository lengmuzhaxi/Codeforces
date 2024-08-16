/*
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            unordered_map<int, char> mapAtoS;
            unordered_map<char, int> mapStoA;
            bool isValid = true;

            for (int i = 0; i < n; i++) {
                int ai = a[i];
                char si = s[i];

                if (mapAtoS.count(ai)) {
                    if (mapAtoS[ai] != si) {
                        isValid = false;
                        break;
                    }
                } else {
                    mapAtoS[ai] = si;
                }

                if (mapStoA.count(si)) {
                    if (mapStoA[si] != ai) {
                        isValid = false;
                        break;
                    }
                } else {
                    mapStoA[si] = ai;
                }
            }

            if (isValid) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
*/
