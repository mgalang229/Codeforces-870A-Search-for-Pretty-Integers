#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// there are two cases:
			// case 1: if a number exists in both lists, then find the minimum number
			// case 2: form a two-digit number using elements from sequences A and B (find the minimum as well)
			if (a[i] == b[j]) {
				ans = min(ans, a[i]);
			} else {
				ans = min(ans, a[i] * 10 + b[j]);
				ans = min(ans, b[j] * 10 + a[i]);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
