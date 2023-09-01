#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int forts[10] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		cin >> forts[i];
	}
    int ans = 0, pre = -1;
    for (int i = 0; i < 9; i++)
    {
        if (forts[i])
        {
            if (pre >= 0 && forts[i] != forts[pre])
            {
                ans = max(ans, i - pre - 1);
            }
            pre = i;
        }
    }
    cout<<ans;
}
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string s;
//		cin >> s;
//		int p = 0,x = 0, y = 0,i=0;
//		for ( i = 0; i < s.size(); i++) 
//		{
//			if (s[i] == '+') 
//			{
//				if (p == 0)
//				{
//					y++;
//					x++;
//				}
//				else if (p == y)
//				{
//					y++;
//				}
//				p++;
//			}
//			else if (s[i] == '-') 
//			{
//				if (y == p)
//				{
//					y--;
//				}
//				if (x == p)
//				{
//					x--;
//				}
//				p--;
//			}
//			else if (s[i] == '0') 
//			{
//				if (p <= 1 || p == x) 
//				{
//					cout << "NO\n"; 
//					break;
//				}
//				if (y == p)
//				{
//					y = p - 1;
//				}
//			}
//			else 
//			{
//				if (y < p && p>1) 
//				{
//					cout << "NO\n"; break;
//				}
//				x = y = p;
//			}
//		}
//		if (i == s.size())
//		{
//			cout << "YES\n";
//		}
//	}
//}