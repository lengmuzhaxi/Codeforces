/*
#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of wins for Suneet
int countSuneetWins(int a1, int a2, int b1, int b2) {
    int wins = 0;

    // Four possible game scenarios
    int scenarios[4][4] = {
        {a1, a2, b1, b2},
        {a1, a2, b2, b1},
        {a2, a1, b1, b2},
        {a2, a1, b2, b1}
    };

    for (int i = 0; i < 4; ++i) {
        int suneetWins = 0, slavicWins = 0;

        // Round 1
        if (scenarios[i][0] > scenarios[i][2]) {
            ++suneetWins;
        } else if (scenarios[i][0] < scenarios[i][2]) {
            ++slavicWins;
        }

        // Round 2
        if (scenarios[i][1] > scenarios[i][3]) {
            ++suneetWins;
        } else if (scenarios[i][1] < scenarios[i][3]) {
            ++slavicWins;
        }

        // Determine if Suneet wins this game
        if (suneetWins > slavicWins) {
            ++wins;
        }
    }

    return wins;
}

int main() {
    int t;
    cin >> t;

    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        results.push_back(countSuneetWins(a1, a2, b1, b2));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
*/
