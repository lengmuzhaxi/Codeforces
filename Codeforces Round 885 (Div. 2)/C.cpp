#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
using namespace std;
int n , a[100003], b[100003],t;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) 
	{
		cin >> n;
		vector<int> cnt(4, 0);
		int i, j , c ;
		for (i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for ( i = 1; i <= n; i++)
		{
			cin >> b[i];
		}
		for ( i = 1; i <= n; i++) 
		{
			while ((a[i] > 0 || b[i] > 0) && a[i] % 2 == 0 && b[i] % 2 == 0)
				a[i] /= 2;
				b[i] /= 2;
			a[i] = a[i] & 1;
			b[i] = b[i] & 1;
			if (a[i] == 0 and b[i] == 0)
			{
				continue;
			}
			else 
			{
				cnt[a[i] * 2 + b[i]]++;
			}
		}
		if (((cnt[1] > 0) + (cnt[2] > 0) + (cnt[3] > 0)) <= 1)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
