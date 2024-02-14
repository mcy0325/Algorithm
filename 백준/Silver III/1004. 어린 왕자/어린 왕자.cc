#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, x1, y1, x2, y2, n, c1, c2, r, start, end;

	cin >> t;
	while (t--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;

		start = 0;
		end = 0;

		while (n--) {
			cin >> c1 >> c2 >> r;

			int num1 = pow((c1 - x1), 2) + pow((c2 - y1), 2);
			int num2 = pow((c1 - x2), 2) + pow((c2 - y2), 2);
			int num3 = pow(r, 2);
			
			if (num1 < num3) {
				if (num2 > num3) {
					start++;
				}
			}

			if (num1 > num3) {
				if (num2 < num3) {
					end++;
				}
			}
		}
		cout << start + end << "\n";
	}

}