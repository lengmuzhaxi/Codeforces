#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s,a,b;
		cin >>s;
		int n = s.size(),f=1;
		for (int i = 1; i < n; i++)
		{
			a = s.substr(0, i);
			b = s.substr(i);
			if (b[0] != '0' && stoi(b) > stoi(a)) 
			{
				cout << a <<" " << b << endl;
				f = 0;
				break;
			}
		}
		if (f)
		{
			cout << "-1\n";
		}
	}
}