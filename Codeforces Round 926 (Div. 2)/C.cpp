#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		int k, x;
		long long a;
		cin >> k >> x >> a;
		int loss = 0, temp = 0;
		while (a >= 0) 
		{
			int tm = loss;
			a -= (tm / (k - 1) + 1);
			loss += (tm / (k - 1) + 1);
			temp++;
		}
		if (temp <= x + 1)
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
}
