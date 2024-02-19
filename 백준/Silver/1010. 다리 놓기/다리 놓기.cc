#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, n, m, res;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		res = 1;
		for (int j = 0; j < n; j++) {
			res *= m - j;
			res /= j + 1;
		}
		cout << res << "\n";
	}
}