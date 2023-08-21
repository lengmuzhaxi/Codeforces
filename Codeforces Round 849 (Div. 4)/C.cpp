#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		string s;
		cin >> s;
		int l = 0, r = n - 1, ans = n;
		while (l < r && ans>0)
		{
			l++;
			r--;
			ans -= 2;
		}
		cout << ans << '\n';
	}
}