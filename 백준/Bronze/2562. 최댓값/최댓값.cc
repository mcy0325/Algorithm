#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[9];
	int max = 0;
	int num = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
			num = i;
		}
	}

	cout << max << "\n" << num + 1;
}