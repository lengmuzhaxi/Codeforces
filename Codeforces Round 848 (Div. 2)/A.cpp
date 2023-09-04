#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	int nums[6] = { 0,1,1,0,0,1};
    unordered_map<int, int>m = { {0,-1} };
    int cur = 0, ans = 0;
    for (int i = 0; i < 6; i++)
    {
        nums[i] == 0 ? cur-- : cur++;
        if (m.count(cur))
        {
            ans = max(ans, i - m[cur]);
        }
        else
            m[cur] = i;
    }
}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int arr[200000] = { 0 }, n = 0,sum=0,f=0;
//		cin >> n;
//		for (int i = 0; i < n; i++) 
//		{
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		for (int i = 0; i < n - 1; i++) 
//		{
//			if (arr[i] == -1 && arr[i + 1] == -1) 
//			{
//				f= 1; 
//				break;
//			}
//		}
//		if (sum == n) {
//			cout << n - 4 << endl;
//		}
//		else if (f == 1) 
//		{
//			cout << sum + 4 << endl;
//		}
//		else 
//		{
//			cout << sum << endl;
//		}
//	}
//}