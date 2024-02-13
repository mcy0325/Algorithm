#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, x1, y1, r1, x2, y2, r2, res;
	double dist, sub;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		sub = r1 > r2 ? r1 - r2 : r2 - r1;

		if (dist == 0 && r1 == r2) {
			res = -1;
		}
		else if (dist < r1 + r2 && (sub < dist)) {
			res = 2;
		}
		else if (dist == r1 + r2 || dist == sub) {
			res = 1;
		}

		else {
			res = 0;
		}

		cout << res << '\n';
	}
}