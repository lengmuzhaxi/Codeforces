#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//using namespace std;
//int main()
//{
//	int m= 0;
//	cin >> m;
//	while (m--)
//	{
//		int n = 0, k = 0,p=0;
//		cin >> n >> k;
//		string s;
//		cin >> s;
//		set<int>st;
//		for (int i = 0; i < n; i++)
//		{
//			if (s[i] == 'B')
//			{
//				st.insert(i);
//			}
//		}
//		for (int j = 0; j < st.size(); j++)
//		{
//			for (int i = j ; i < st.size(); i++)
//			{
//				if (i - j< k)
//				{
//					p=1;
//				}
//				else
//				{
//					p++;
//				}
//			}
//		}
//		cout << p << '\n';
//	}
//}