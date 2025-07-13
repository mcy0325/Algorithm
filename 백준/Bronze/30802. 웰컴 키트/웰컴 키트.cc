#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> t_num(6);
	
	int num;
	cin >> num;

	for (int i = 0; i < 6; i++) {
		cin >> t_num[i];
	}

	int t, p;

	cin >> t >> p;

	int ans = 0;

	for (int i = 0; i < 6; i++) {
		ans += (t_num[i] + t - 1) / t;
	}

	cout << ans << "\n";

	if (num < p) {
		cout << 0 << " " << num % p;
	}
	else {
		cout << num / p << " " << num % p;
	}

	return 0;
}