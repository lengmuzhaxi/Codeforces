#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0, n = 0, arr[100] = { 0 },i=0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (i = 0; i < n; i++)
		{
				cout << n+1- arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}