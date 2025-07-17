#include <iostream>
using namespace std;

int main() {
	int n, m;
	int arr[100001];
    
    ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		arr[i] = arr[i - 1] + num;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		cout << arr[b] - arr[a - 1] << " \n";
	}

	return 0;
}
