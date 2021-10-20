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
	// find the smallest integer that is present in both lists (if it exists)
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				mn = min(mn, a[i]);
			}
		}
	}
	if (mn != INT_MAX) {
		cout << mn << '\n';
		return 0;
	}
	// otherwise, combine the two smallest elements in both sequence
	set<int> s = {*min_element(a.begin(), a.end()), *min_element(b.begin(), b.end())};
	for (auto& e : s) {
		cout << e;
	}
	cout << '\n';
	return 0;
}
