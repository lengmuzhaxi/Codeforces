#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int h = 0, b = 0, c = 0;
		cin >> h >> b >> c;
		if (h >b+c)
		{
			cout << 2 * (b + c) + 1 << '\n';
		}
		else if (h == b + c)
		{
			cout << 2 * (b + c) - 1 << '\n';
		}
		else
		{
			cout << 2 * h - 1 << '\n';
		}
	}
}