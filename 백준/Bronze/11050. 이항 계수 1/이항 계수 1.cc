#include <iostream>
using namespace std;

int factorial(int m) {
	int res = 1;
	for (int i = 1; i <= m; i++) {
		res *= i;
	}
	return res;
}

int main() {
	int n, k;
	cin >> n >> k;

	int ans = factorial(n) / (factorial(k) * factorial(n - k));
	cout << ans;

	return 0;
}