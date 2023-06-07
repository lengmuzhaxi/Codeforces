#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s,a;
		cin >> s;
		for (int i = 0; i < s.size();)
		{
			a += s[i];
			i++;
			while (s[i] != a.back())
			{
				i++;
			}
			i++;
		}
		cout << a << endl;
	}
	return 0;
}