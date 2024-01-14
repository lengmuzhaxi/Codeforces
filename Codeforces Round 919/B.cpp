#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, x;
		cin >> n >> k >> x;
        int A[200005] = {};
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        sort(A+1, A+n+1, greater<int>());
        for (int i = 1; i <= n; i++)
        {
            A[i] += A[i - 1];
        }
        int ans = -1e9;
        for (int i = 0; i <= k; i++)
        {
          ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);
        }
        cout << ans << "\n";
	}
}
