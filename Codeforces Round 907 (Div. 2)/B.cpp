#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int t, n, q;
int x, l;
int main() {
	cin >> t;
	while (t--) {
		cin >> n >> q;
		vector<int> vec(n);
		for (int& e : vec) cin >> e;

		l = INT_MAX;
		for (int i = 0; i < q; i++) {
			cin >> x;
			if (l > x) {
				l = x;
				for (int& e : vec) {
					if (!(e % (1 << x))) e += (1 << (x - 1));
				}
			}
		}
		for (int e : vec) cout << e << ' '; cout << '\n';
	}
}