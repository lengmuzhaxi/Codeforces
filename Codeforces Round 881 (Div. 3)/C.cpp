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
		ll sum = 0, n = 0;
		cin >> n;
		while (n)
		{
			sum += n;
			n /= 2;
		}
		cout << sum <<endl;
	}
	return 0;
}