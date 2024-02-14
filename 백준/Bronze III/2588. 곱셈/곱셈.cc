#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	int res = 0;
	int add = 0;
	cin >> a >> b;
	
	for (int i = 0; i < 3; i++) {
		add = a * (b % 10);
		cout << add << "\n";
		if (i != 0) {
			res += (add * pow(10, i));
		}
		else {
			res += add;
		}
		b /= 10;
	}

	cout << res;

}