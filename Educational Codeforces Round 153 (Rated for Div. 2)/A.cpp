#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string n;
//		cin >> n;
//		if (n == "()")
//		{
//			cout << "NO" << '\n';
//		}
//		else 
//		{
//			cout << "YES" << '\n';
//			string b(n.size(), '(');
//			b += string(n.size(), ')');
//			string c = "";
//			for (int i = 0; i < n.size(); i++)
//			{
//				c += "()";
//			}
//			if (c.find(n) != string::npos)
//			{
//				cout << b << '\n';
//			}
//			else
//			{
//				cout << c << '\n';
//			}
//		}
//	}
//}