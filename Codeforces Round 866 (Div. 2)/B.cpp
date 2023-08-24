#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
using ll = long long;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll x = 0, y = 0;
		string s;
		cin >> s;
		s += s;
		for (char c : s)
		{
			y = c == '1' ? y + 1 : 0;
			x = max(x, y);
		}
		ll n = s.size() / 2;
		if (x > n)
		{
			cout << n * n << '\n';
		}
		else
		{
			ll a = (x + 1) / 2;
			ll b = (x + 2) / 2;
			cout << a*b<< '\n';
		}
	}
}