#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, l;
		cin >> a >> b >> l;
		set<int>s;
		for (int i = 1; l % i == 0; i *= a)
		{
			for (int j = 1; l % (i * j) == 0; j *= b)
			{
				s.insert(l / (i * j));
			}
		}
		cout << s.size() << endl;
	}
}