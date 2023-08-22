#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0,ans=0;
		cin >> n;
		string s;
		cin >> s;
        vector<int> cnt(26, 0), p(26, 0);
        for (auto x : s)
        {
            cnt[x - 'a']++;
        }
        for (auto x : s) 
        {
            --cnt[x - 'a'];
            ++p[x - 'a'];
            int cur = 0;
            for (int i = 0; i < 26; ++i) 
            {
                cur += min(1, cnt[i]) + min(1, p[i]);
            }
            ans = max(ans, cur);
        }
        cout << ans << "\n";
	}
}