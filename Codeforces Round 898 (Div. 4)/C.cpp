#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m= 0;
//	cin >> m;
//	while (m--)
//	{
//		int k =0;
//		char s[11][11] = { 0 };
//		for (int i = 1; i <= 10; i++)
//		{
//			for (int j = 1; j <= 10; j++)
//			{
//				cin >> s[i][j];
//			}
//		}
//		for (int i = 1; i <= 10; i++)
//		{
//			for (int j = 1; j <= 10; j++)
//			{
//				if (s[i][j] == 'X')
//				{
//					if ((i == 1) || (j == 1) || j == 10 || i == 10)
//					{
//						k++;
//					}
//					else if ((i == 2) || (j == 2) || j == 9 || i == 9)
//					{
//						k += 2;
//					}
//					else if ((i == 3) || (j == 3) || j == 8 || i == 8)
//					{
//						k += 3;
//					}
//					else if ((i == 4) || (j == 4) || j == 7 || i == 7)
//					{
//						k += 4;
//					}
//					else
//					{
//						k += 5;
//					}
//				}
//			}
//		}
//		cout << k << '\n';
//	}
//}