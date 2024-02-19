#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	int max = -1000000;
	int min = 1000000;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (max < k) {
			max = k;
		}
		if (min > k) {
			min = k;
		}
	}
	cout << min << " " << max;
}