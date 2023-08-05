#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<cstring>
using namespace std;
int mod = 1e9 + 7;
int n, x, cache[105][2005][2], a[100];
void add(int& a, int b) 
{
	a += b;
	if (a >= mod) 
	{
		a -= mod;
	}
}
void test()
{
	function < int(int, int, bool) > f = [&](int i, int sum, bool m)->int
	{
		cin >> n >> x;
		//vector<int>a(n);
		memset(cache, -1, sizeof(cache));
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			a[i] -= x;
		}
		if (n < 3)
		{
			cout << 0 << endl;
		}
		else
		{
			sort(a, a + n);
			int answer = 0;
			for (int i = 1; i < n - 1; ++i)
			{
				add(answer, f(i, 0, 0));
			}
			cout << answer << endl;
		}
		if (i == n - 1)
		{
			return sum == 0 && m;
		}
		int& ret = cache[i][sum + 10000][m];
		if (~ret)
		{
			return ret;
		}
		ret = (sum == 0 && m);
		add(ret, f(i + 1, sum, m));
		add(ret, f(i + 1, sum + a[i], 1));
		return ret;
	};
}
int main()
{
	test();
}