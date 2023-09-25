#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
using ll = long long;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, a[100] = { 0 }, b[100] = { 0 };
		ll cnt=0,x=0,y=0;
		cin >> n;
		cin >> x >> y;
		for (int i = 0; i < n-1; i++)
		{
			cin >> a[i] >> b[i];
			{
				if (a[i] >= x && b[i] >= y)
				{
					cnt++;
				}
			}
		}
		cout << (cnt > 0 ? -1 : x) << '\n';
	}
}