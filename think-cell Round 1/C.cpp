#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin >> n;
		vector<int>b;
		b.push_back(1987654321);
		for (int i = 1; i <= n; i++)
		{
			cin >> k;
			b.push_back(k + i);
		}
		sort(b.begin(), b.end());
		for (int i = n-1; i >=0; i--)
		{
			if (b[i + 1] <= b[i])
			{
				b[i] = b[i + 1] - 1;
			}
			cout << b[i] << ' ';
		}
		cout << '\n';
	}
}