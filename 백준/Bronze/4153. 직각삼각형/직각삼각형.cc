#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	vector<int> a(3);

	while (true) {
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}

		if (a[0] + a[1] + a[2] == 0) {
			break;
		}

		sort(a.begin(), a.end());

		if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2)) {
			cout << "right" << "\n";
		}
		else {
			cout << "wrong" << "\n";
		}
	}
	
	return 0;
}