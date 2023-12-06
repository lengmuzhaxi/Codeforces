#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring> 
#include<algorithm>
using namespace std;
int main()
{
	int t;
	string s;
	cin >> t;
	while (t--)
	{
		int mx = 0, n = 0;
		cin >> n >> s;
		for (int i = 'a'; i <= 'z'; i++)
		{
			int m = count(s.begin(), s.end(), i);
			mx = max(mx, m);
		}
		cout << max(n & 1, mx - (n - mx)) << endl;
	}
	return 0;
}