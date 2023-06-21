#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
	int k=0;
	cin >> k;
	vector<ll> a(k);
	for (int i = 0; i < k; ++i)
	{
		cin >> a[i];
	}
	ll n = 0, m = 0, x = 0;
	cin >> n >> m >> x;
	ll sum = 0;
	for (int i = 0; i < k; ++i) 
	{
		sum += a[i] % m;
	}
	ll b = sum * (n / k) + x % m;
	int pos = n % k;
	for (int i = 0; i < pos; ++i)
	{
		b += a[i] % m;
	}
	cout <<n-b/m<< endl;
	return 0;
}