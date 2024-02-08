#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n, x;
		cin >> n;
		vector<int>ch(n, 0);
		for (int i = 0; i < n; i++) 
		{
			cin >> x;
			cout << char(ch[x] + 'a');
			ch[x]++;
		}
		cout << endl;
	}
	return 0;
}

