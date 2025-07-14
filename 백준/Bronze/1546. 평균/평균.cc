#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	float n;
	cin >> n;

	vector<float> v(n);

	float ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		v[i] = (v[i] / v[n - 1]) * 100;
		ans += v[i];
	}

	cout << ans / n;

	return 0;
	
}