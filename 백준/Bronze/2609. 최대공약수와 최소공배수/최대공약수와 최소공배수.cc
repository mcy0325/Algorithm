#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cin >> a >> b;

	int ans1 = gcd(a, b);
	int ans2 = ans1 * (a / ans1) * (b / ans1);

	cout << ans1 << "\n" << ans2;

	return 0;
}