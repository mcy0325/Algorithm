#include <iostream>
#include <queue>

using namespace std;

int n, k;
int visited[100001];

int bfs() {
	queue <int> q;
	q.push(n);
	visited[n] = 0;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur == k) {
			break;
		}

		int minus = cur - 1;
		int plus = cur + 1;
		int multi = cur * 2;

		if (minus >= 0 && visited[minus] == 0) {
			q.push(minus);
			visited[minus] = visited[cur] + 1;
		}

		if (plus < 100001 && visited[plus] == 0) {
			q.push(plus);
			visited[plus] = visited[cur] + 1;
		}

		if (multi < 100001 && visited[multi] == 0) {
			q.push(multi);
			visited[multi] = visited[cur] + 1;
		}

	}

	return visited[k];

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	cout << bfs();

	return 0;
}