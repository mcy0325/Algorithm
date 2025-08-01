#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int c = b;

	while (true) {
		if (b / 10 == 0) {
			cout << a * (b % 10) << "\n";
			break;
		}
		int tmp = b % 10;
		cout << a * tmp << "\n";
		b = b / 10;
	}

	cout << a * c << "\n"; 

	return 0;
}
