#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t=0, n=0;
	string s;
	cin >> t;
	while (t--)
	{
		int v[26] = { 0 },c=0;
		cin >> n >> s;
		for (int i = 0; i <n; i++)
		{
			v[s[i] - 'A']++;
			if (v[s[i] - 'A'] == (s[i] - 'A'+1))
			{
				c++;
			}
		}
		cout << c << "\n";
	}
}

