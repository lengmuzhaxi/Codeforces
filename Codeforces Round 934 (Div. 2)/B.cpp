#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int>a;
		for (int i = 0; i < 2 * n; i++)
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		unordered_map<int, int>mp;
		for (int i = 0; i < n; i++)
		{
			mp[i + 1];
			mp[a[i]]++;
		}
		vector<int>l, r;
		for (auto v : mp)
		{
			if (v.second == 2 && l.size() < (2 * k))
			{
				l.push_back(v.first);
				l.push_back(v.first);
			}

			if (v.second == 0 && r.size() < (2 * k))
			{
				r.push_back(v.first);
				r.push_back(v.first);
			}
		}
		if (l.size() < (2 * k))
		{
			for (auto v : mp)
			{
				if (v.second == 1 && l.size() < (2 * k))
				{
					l.push_back(v.first);
					r.push_back(v.first);
				}
			}
		}
		for (auto v : l)
		{
			cout << v << " ";
		}
		cout << endl;
		for (auto v : r)
		{
			cout << v << " ";
		}
		cout << endl;
	}
}