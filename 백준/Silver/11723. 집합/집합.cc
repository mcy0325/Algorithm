#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int M;
	cin >> M;

	string str;
	int arr[21] = { 0 };

	for (int i = 0; i < M; i++) {
		cin >> str;

		int x;

		if (str == "add") {
			cin >> x;
			if (arr[x] == 0) {
				arr[x] = 1;
			}
		}

		if (str == "remove") {
			cin >> x;
			if (arr[x] == 1) {
				arr[x] = 0;
			}
		}

		if (str == "check") {
			cin >> x;
			if (arr[x] == 1) {
				cout << 1 << " \n";
			}
			else {
				cout << 0 << "\n";
			}
		}

		if (str == "toggle") {
			cin >> x;
			
			if (arr[x] == 1) {
				arr[x] = 0;
			}
			else {
				arr[x] = 1;
			}
		}

		if (str == "all") {
			for (int j = 1; j <= 20; j++) {
				arr[j] = 1;
			}
		}

		if (str == "empty") {
			memset(arr, 0, sizeof(arr));
		}
	}

	return 0;
}