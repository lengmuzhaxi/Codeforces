#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			cout << s[i];
			if (s[i] == 'a' || s[i] == 'e')
			{
				if (i != n - 1 && (i == n - 2 || (s[i + 2] != 'a' && s[i + 2] != 'e')))
				{
					cout << s[i + 1];
					i++;
				}
				if (i < n - 1)
				{
					cout << '.';
				}
			}
			cout << '\n';
		}
	}
}