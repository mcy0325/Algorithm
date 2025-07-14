#include <iostream>
#include <queue>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, m, imp;
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		cin >> n >> m;

		for (int j = 0; j < n; j++) {
			cin >> imp;
			q.push({ j, imp });
			pq.push(imp);
		}

		int cnt = 0;

		while (!q.empty()) {
			int index = q.front().first;
			int priority = q.front().second;
			q.pop();

			if (pq.top() == priority) {
				pq.pop();
				cnt++;

				if (index == m) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ index, priority });
			}
		}
	}
	return 0;
}