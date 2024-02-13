#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, num, tmp1, tmp2, zero, one;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> num;
		tmp1 = 1;
		tmp2 = 0;
		zero = 1;
		one = 0;

		for (int j = 0; j < num; j++) {
			zero = tmp2;
			one = tmp1 + tmp2;
			tmp1 = zero;
			tmp2 = one;
		}

		cout << zero << " " << one << "\n";
	}

}