#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, a, b, c = 1;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		for (int j = 0; j < b; j++) {
			c = (c * a) % 10;
		}

		if (c == 0) {
			cout << "10" << "\n";
		}
		else {
			cout << c << "\n";
		}

		c = 1;
	}
}