#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << "\n";
		}
		else {
			continue;
		}
	}

	return 0;
}