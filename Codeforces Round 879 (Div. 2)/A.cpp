#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0, arr[100] = { 0 };
	cin >> t;
	while (t--)
	{
		int n = 0, s = 0, m = 0, k = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] == 1)
			{
				m++;
			}
			else
			{
				s++;
			}
		}
		while (m < s)
		{
			m++;
			s--;
			k++;
		}
		if (s % 2)
		{
			k++;
		}
		cout << k << endl;
	}
	return 0;
}