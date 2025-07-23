#include <iostream>
#include <queue>
using namespace std;

struct index {
	int x;
	int y;
	int z;
};

int m, n, h, tomato;
int tomato_box[101][101][101];
int visited[101][101][101] = {};
queue<index> q;

int dx[6] = { -1, 1, 0, 0, 0, 0 };
int dy[6] = { 0, 0, -1, 1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, -1, 1 };

int bfs() {
	int day = 0;

	while (!q.empty()) {
		int cur_x = q.front().x;
		int cur_y = q.front().y;
		int cur_z = q.front().z;
		q.pop();

		for (int i = 0; i < 6; i++) {
			int cx = cur_x + dx[i];
			int cy = cur_y + dy[i];
			int cz = cur_z + dz[i];

			if (cx < 0 or cx >= m or cy < 0 or cy >= n or cz < 0 or cz >= h) continue;

			if (tomato_box[cz][cy][cx] == 0 and visited[cz][cy][cx] == -1) {
				index add_tomato;
				tomato_box[cz][cy][cx] = 1;
				add_tomato.x = cx;
				add_tomato.y = cy;
				add_tomato.z = cz;
				q.push(add_tomato);

				visited[cz][cy][cx] = visited[cur_z][cur_y][cur_x] + 1;
			}
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (tomato_box[i][j][k] == 0) return -1;
				day = max(day, visited[i][j][k]);
			}
		}
	}

	return day;
}

int main() {
	cin >> m >> n >> h;
	fill_n(&tomato_box[0][0][0], 101 * 101 * 101, 1);

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> tomato;
				tomato_box[i][j][k] = tomato;

				index tomato_index;
				tomato_index.x = k;
				tomato_index.y = j;
				tomato_index.z = i;

				if (tomato == 1) {
					q.push(tomato_index);
					visited[i][j][k] = 0;
				}
				if (tomato == 0) {
					visited[i][j][k] = -1;
				}
			}
		}
	}

	cout << bfs();

	return 0;
}