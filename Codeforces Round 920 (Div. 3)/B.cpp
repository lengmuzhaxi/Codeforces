#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int cnt = 0,n=0,k=0;
		string s, f;
		cin >> n >> s >> f;
		for (int i = 0; i < n; i++)
		{
			if (s[i]!=f[i]&&s[i]=='0')
			{
				cnt++;
			}
			if (s[i] == '1'&&f[i]=='0')
			{
				k++;
			}
		}
		cout << max(cnt,k)<< '\n';
	}
}