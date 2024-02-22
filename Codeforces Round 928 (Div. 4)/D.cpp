#include <iostream>
#include <map>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
		map<int, int>m;
		int n;
		cin >> n;
		int d = (1LL << 31) - 1;
		int a = 0, x, y;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			y = d ^ x;
			if (m[x] == 0)
			{
				a++; 
				m[y]++;
			}
			else
			{
				m[x]--;
			}
		}
		cout << a << endl;

	}
}