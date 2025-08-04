#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1, y1, x2, y2, r1, r2, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		double d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

		int add = r1 + r2;
		int sub = r1 - r2 > 0 ? (r1 - r2) : (-1) * (r1 - r2);

		if (r1 == r2 && d == 0) {
			cout << -1 << '\n';
		}

		else if (d > add || d < sub) {
			cout << 0 << '\n';
		}

		else if (d == add || d == sub) {
			cout << 1 << '\n';
		}

		else if (d < add) {
			cout << 2 << '\n';
		}
		
	}
	return 0;
}