#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	int val[] = { 1,10,100,1000,10000 },t=0;
	cin >> t;
	while (t--)
	{
		cin >> s;
		for (char& c : s)
		{
			c -= 'A';
		}
		reverse(s.begin(), s.end());
		int an = -2e9;
		auto check = [&](int p)
		{
			if (p == -1)
			{
				return;
			}
			for (char v : {0, 1, 2, 3, 4})
			{
				swap(v, s[p]);
				int n = 0, l = 0;
				for (char c : s)
				{
					n += c >=l ? val[l = c] : -val[c];
				}
				an = max(an, n);
				swap(v, s[p]);
			}
		};
		for (int i : {0, 1, 2, 3, 4})
		{
			check(s.find_first_of(i)), check(s.find_last_of(i));
		}
		cout << an << endl;
	}
	return 0;
}
