#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
}

int main() {
	int n;
	cin >> n;

	int ans = 0;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (isPrime(input)) {
			ans++;
		}
	}

	cout << ans;

	return 0;
}