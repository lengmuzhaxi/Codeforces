#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, sum = 0,k=0,x=0,l=0;
		cin >> n >> k >> x;
		if (k-1>x||k>n)
		{
			cout << -1 << '\n';
			continue;
		}
		else
		{
			if (k == x)
			{
				sum = (k * (k - 1)) / 2 + (n - k) * (k - 1);
			}
			else
			{
				sum = (k * (k - 1)) / 2 + (n - k) * x;
			}
		}
		cout << sum << '\n';
	}
}