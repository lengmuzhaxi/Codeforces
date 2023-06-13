#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0, n = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n >= 5)
		{
			cout << "Alice" << endl;
		}
		else
		{
			cout << "Bob" << endl;
		}
	}
	return 0;
}