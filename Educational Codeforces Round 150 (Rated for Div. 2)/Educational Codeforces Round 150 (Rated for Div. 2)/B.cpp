#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t=0,n=0,x=0;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector<int>a;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (a.empty())
			{
				a.push_back(x);
				cout << 1;
			}
			else
			{
				int m = cnt + (a.back() > x);
				if (m + (x > a[0]) <= 1)
				{
					a.push_back(x);
					cnt =m;
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
		}
		cout << endl;
	}
	return 0;
}