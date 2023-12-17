#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0, m = 0;
		cin >> n >> m;
		cout << max(n, m) << '\n';
	}
}