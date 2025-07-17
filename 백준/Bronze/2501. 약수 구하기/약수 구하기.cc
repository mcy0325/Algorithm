#include <iostream>
using namespace std;

void factor(int n, int k) {
	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
			if (cnt == k) {
				cout << i;
				return;
			}
		}
	}

	cout << 0;
}

int main() {
	int n, k;
	cin >> n >> k;

	factor(n, k);

	return 0;
}