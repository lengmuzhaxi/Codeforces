#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>
using ll = long long;
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int>prices(n);
	for (int i = 0; i < n; i++)
	{
		cin >> prices[i];
	}
	//int n = prices.size();
	vector<int> ans(n);
	stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && st.top() > prices[i]) {
			st.pop();
		}
		ans[i] = st.empty() ? prices[i] : prices[i] - st.top();
		st.emplace(prices[i]);
	}

	/*int t;
	cin >> t;
	while (t--)
	{
		ll x = 0, k = 0, sum = 0, a = 0;
		cin >> x >> k;
		for (int i = x;; i++)
		{
			a = i, sum = 0;
			while (a)
			{
				sum += a % 10;
				a /= 10;
			}
			if (sum % k == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}*/
}
