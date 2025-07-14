#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<string>hear(n);
	string see;
	vector<string>ans;

	for (int i = 0; i < n; i++) {
		cin >> hear[i];
	}

	sort(hear.begin(), hear.end());

	for (int i = 0; i < m; i++) {
		cin >> see;
		if (binary_search(hear.begin(), hear.end(), see)) {
			ans.push_back(see);
		}
	}

	sort(ans.begin(), ans.end());

	cout << ans.size() << "\n";

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}

	return 0;
}