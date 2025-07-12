#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int m;
	cin >> m;
	vector<int> b(m);

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < m; i++) {
		if (binary_search(a.begin(), a.end(), b[i])) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

	return 0;
}