#include <iostream>
using namespace std;

int calc_win(long long x, long long y) {
	return (100 * y) / x;
}

int main() {
	long long x, y, z;
	int cnt = -1;

	cin >> x >> y;

	z = calc_win(x, y);

	if (z >= 99) {
		cout << cnt << "\n";
		return 0;
	}

	int left = 0;
	int right = 1000000000;
	int mid = 0;

	while (left <= right) {
		mid = (left + right) / 2;
		long long newz = calc_win(x + mid, y + mid);

		if (z < newz) {
			right = mid - 1;
		}

		else {
			left = mid + 1;
		}
	}

	cout << left << "\n";

	return 0;

}