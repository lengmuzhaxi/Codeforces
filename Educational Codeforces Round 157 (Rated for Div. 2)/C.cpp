#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<algorithm>
using namespace std;

void solve()
{
    int n; cin >> n;
    int A[100];
    for (int i = 1; i < n; i++) cin >> A[i];

    int B[100];
    B[0] = 0;
    for (int i = 1; i < n; i++)
    {
        B[i] = A[i] ^ B[i - 1];
    }

    for (int bit = 0; bit < 31; bit++)
    {
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) if (i & (1 << bit)) a++;
        for (int i = 0; i < n; i++) if (B[i] & (1 << bit)) b++;

        if (a != b) B[0] ^= (1 << bit);

    }

    for (int i = 1; i < n; i++)
    {
        B[i] = A[i] ^ B[i - 1];
    }

    for (int i = 0; i < n; i++) cout << B[i] << " ";
    cout << endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();



}
