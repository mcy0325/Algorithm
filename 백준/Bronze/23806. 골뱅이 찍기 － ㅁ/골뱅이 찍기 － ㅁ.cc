#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n * 5; j++) {
			cout << "@";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n * 3; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "@";
		}
		for (int j = 1; j <= n * 3; j++) {
			cout << " ";
		}
		for (int j = 1; j <= n; j++) {
			cout << "@";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n * 5; j++) {
			cout << "@";
		}
		cout << "\n";
	}

	return 0;
}