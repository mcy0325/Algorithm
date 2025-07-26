#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int N, M, V;
vector<vector<int>> graph;

void dfs() {
	vector<bool> visited;
	visited.resize(N + 1, false);

	stack<int> s;
	s.push(V);

	while (!s.empty()) {
		int cur = s.top();
		s.pop();

		if (visited[cur] == false) {
			visited[cur] = true;
			cout << cur << " ";

			sort(graph[cur].begin(), graph[cur].end());

			for (int i = graph[cur].size() - 1; i >= 0; i--) {
				int k = graph[cur][i];
				if (visited[k] == false) {
					s.push(k);
				}
			}
		}

	}
}

void bfs() {
	vector<bool> visited;
	visited.resize(N + 1, false);

	queue<int> q;
	q.push(V);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (visited[cur] == false) {
			visited[cur] = true;
			cout << cur << " ";

			sort(graph[cur].begin(), graph[cur].end());

			for (int i = 0; i < graph[cur].size(); i++) {
				int k = graph[cur][i];
				if (visited[k] == false) {
					q.push(k);
				}
			}
		}
	}

}

int main() {
	cin >> N >> M >> V;
	graph.resize(N + 1);

	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	dfs();
	cout << "\n";
	bfs();
	return 0;
}