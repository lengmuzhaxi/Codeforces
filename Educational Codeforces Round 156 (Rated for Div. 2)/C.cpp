#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s;
		ll p=0;
		cin >> s >> p;
		int n = s.size();
		bool f = p < n;
		vector<char>st;
		s += '$';
		for (auto c : s) 
		{
			while (!f && st.size() > 0 && st.back() > c)
			{
				p -= n;
				--n;
				st.pop_back();
				if (p < n)
				{
					f = true;
				}
			}
			st.push_back(c);
		}
		cout << st[p];
	}
}