#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int a[10];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int cnt = 0;

	for (int i = n - 1; i >= 0; i--) {
		if ((a[i]) <= k) {
			cnt += k / a[i];
			k %= a[i];
		}
	}
	cout << cnt;
}