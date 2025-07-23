#include <iostream>

using namespace std;

int fibo_arr[50] = { 0, 1, };

int fibo(int n) {
	if (n == 0 || n == 1) {
		return fibo_arr[n];
	}
	else if (fibo_arr[n] == 0) {
		fibo_arr[n] = fibo(n - 1) + fibo(n - 2);
	}
	return fibo_arr[n];
}

int main() {
	int t;
	cin >> t;

	int tmp;
	for (int i = 0; i < t; i++) {
		cin >> tmp;
		if (tmp == 0) {
			cout << "1 0" << "\n";
		}
		else {
			cout << fibo(tmp - 1) << " " << fibo(tmp) << "\n";
		}
	}
}