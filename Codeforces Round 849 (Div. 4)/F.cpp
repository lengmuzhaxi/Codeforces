#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int t=0;
	cin >> t;
	while (t--) 
	{
		int n=0,q=0;
		cin >> n >> q;
		vector<int> a(n + 10);
		set<int> s;
		for (int i = 1; i <= n; i++) 
		{
			cin >> a[i];
			if (a[i] >= 10)
			{
				s.insert(i);
			}
		}
		while (q--) 
		{
			int op=0,x=0,y=0;
			cin >> op >> x;
			if (op == 1) 
			{
				cin >> y;
				auto it = s.lower_bound(x);
				while (it != s.end() && (*it <= y)) 
				{
					int t = 0;
					while (a[*it] > 0) 
					{
						t += (a[*it] % 10);
						a[*it] /= 10;
					}
					a[*it] = t;
					if (a[*it] < 10) 
					{
						it = s.erase(it);
					}
					else it++;
				}
			}
			else
			{
				cout << a[x] << '\n';
			}
		}
	}
	return 0;
}