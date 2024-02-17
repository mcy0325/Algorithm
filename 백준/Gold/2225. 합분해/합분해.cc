#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;

	vector<vector<int>> dp(k + 1, vector<int>(n + 1, 1));

	for (int i = 2; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000000;
		}
	}

	cout << dp[k][n];
}