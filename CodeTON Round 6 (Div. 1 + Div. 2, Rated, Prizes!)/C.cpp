#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, k = 0;
		cin >> n >> k;
		vector<int>a(n);
		set<int>st;
		for (auto& x : a)
		{
			cin >> x;
			st.insert(x);
		}
		int l = 0, r = n - 1;
		for (int j = 1; j <= k; j++) 
		{
			while (l <= r && a[l] < j)
			{
				l++;
			}
			while (l <= r && a[r] < j)
			{
				r--;
			}
			if (l > r || !st.count(j))
			{
				cout << "0 ";
			}
			else
			{
				cout << (r - l + 1) * 2 << " ";
			}
		}
		cout << "\n";
	}
}