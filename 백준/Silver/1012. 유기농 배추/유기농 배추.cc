#include <iostream>
#include <algorithm>
using namespace std;

int t, m, n, k, x, y;
int res = 0;
int cabbageField[50][50];
int xpos[4] = { 0, 0, -1, 1 };
int ypos[4] = { 1, -1, 0, 0 };

void dfs(int x, int y) {
	cabbageField[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int xp = x + xpos[i];
		int yp = y + ypos[i];
		if (xp < 0 || yp < 0 || xp >= m || yp >= n) {
			continue;
		}
		if (cabbageField[xp][yp] == 1) {
			dfs(xp, yp);
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			cabbageField[x][y] = 1;
		}

		for (int j = 0; j < m; j++) {
			for (int l = 0; l < n; l++) {
				if (cabbageField[j][l] == 1) {
					dfs(j, l);
					res++;
				}
			}
		}
		cout << res << "\n";
		res = 0;
		for (int j = 0; j < m; j++) {
			fill(cabbageField[j], cabbageField[j] + n, 0);
		}
	}
}