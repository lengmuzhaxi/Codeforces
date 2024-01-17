#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
		ll m[200005] = { 0 };
		ll n, f, a, b;
		cin >> n >> f >> a >> b;
		for (int i = 1; i <= n; i++) 
		{
			cin >> m[i];
			f = max(f - a * (m[i] - m[i - 1]), f - b);
		}
		if (f > 0)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}