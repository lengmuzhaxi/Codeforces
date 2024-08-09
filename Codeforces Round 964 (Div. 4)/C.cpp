/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_shower(int n, int s, int m, const vector<pair<int, int>>& intervals) {
    if (intervals[0].first >= s) {
        return true;
    }
    for (int i = 1; i < n; ++i) {
        if ((intervals[i].first - intervals[i - 1].second) >= s) {
            return true;
        }
    }
    if ((m - intervals.back().second) >= s) {
        return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;

    for (int i = 0; i < t; ++i) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> intervals(n);
        for (int j = 0; j < n; ++j) {
            cin >> intervals[j].first >> intervals[j].second;
        }

        if (can_shower(n, s, m, intervals)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
*/
