#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<map>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		cin >> n;
//		map<string, int> mp;
//		mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
//		while (n--)
//		{
//			int m = 0;
//			string s;
//			cin >> m;
//			cin >> s;
//			mp[s] = min(mp[s], m);
//		}
//			if (min(mp["11"], mp["10"] + mp["01"]) > (int)1e6) 
//			{
//				cout << "-1\n";
//			}
//			else
//			{
//				cout << min(mp["11"], mp["10"] + mp["01"]) << "\n";
//			}
//	}
//}