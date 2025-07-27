#include <iostream>
using namespace std;

int a, b, c;
int n;

int main() {
	cin >> a >> b >> c;
	cin >> n;

	int total = 0;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int s1, s2, s3;
			cin >> s1 >> s2 >> s3;

			int tmp = 0;
			tmp = (s1 * a) + (s2 * b) + (s3 * c);
			total += tmp;
		}
		if (ans < total) {
			ans = total;
		}
		total = 0;
	}

	cout << ans;

	return 0;
}