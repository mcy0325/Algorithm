#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double a, b, res;
	cin >> a >> b;
	res = a / b;

	cout << fixed;
	cout.precision(9);

	cout << res;

}