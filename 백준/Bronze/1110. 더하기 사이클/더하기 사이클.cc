#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int cnt = 0;
	int tmp = n;

	do {
		int sum = (tmp / 10) + (tmp % 10);
		tmp = (tmp % 10) * 10 + (sum % 10);
		cnt++;
	} while (tmp != n);

	cout << cnt;
	return 0;
}
