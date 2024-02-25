#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,a[100];
		cin >> n;
		int sum = 0,i = 0, j = n - 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		while (a[i] == 0)
		{
			i++;
		}
		while (a[j] == 0)
		{
			j--;
		}
		cout << j - i + 1 - sum << endl;
	}
}
