/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

pair<string, string> can(string s, string t) {
    int t_index = 0;
    int t_len = t.length();

    for (int i = 0; i < s.length(); ++i) {
        if (t_index < t_len && (s[i] == t[t_index] || s[i] == '?')) {
            s[i] = t[t_index];
            t_index++;
        }
    }

    // If we have not placed all characters of t, it's not possible
    if (t_index < t_len) {
        return make_pair("NO", "");
    }

    // Replace any remaining '?' with 'a'
    for (char &c : s) {
        if (c == '?') {
            c = 'a';
        }
    }

    return make_pair("YES", s);
}

vector<pair<string, string>> solve(vector<pair<string, string>> test_cases) {
    vector<pair<string, string>> results;
    for (auto &test_case : test_cases) {
        auto result = can(test_case.first, test_case.second);
        results.push_back(result);
    }
    return results;
}

int main() {
    int T;
    cin >> T;
    vector<pair<string, string>> test_cases;

    for (int i = 0; i < T; ++i) {
        string s, t;
        cin >> s >> t;
        test_cases.push_back(make_pair(s, t));
    }

    vector<pair<string, string>> results = solve(test_cases);

    for (auto &result : results) {
        if (result.first == "NO") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << result.second << endl;
        }
    }

    return 0;
}
*/
