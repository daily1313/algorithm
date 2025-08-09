#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 987654321

using namespace std;

vector<pair<int, int>> graph[50001];
int d[50001];

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
		graph[b].push_back({ a,c });
	}
	for (int i = 1; i <= N; i++) {
		d[i] = INF;
	}
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.push({ 0,1 });
	d[1] = 0;
	while (!pq.empty()) {
		int cost = pq.top().first;
		int idx = pq.top().second;
		pq.pop();
        if(d[idx] < cost) continue;
		for (int k = 0; k < graph[idx].size(); k++) {
			int nextN = graph[idx][k].first;
			int nextCost = graph[idx][k].second;
			if (d[nextN] > nextCost + cost) {
				d[nextN] = nextCost + cost;
                pq.push({ d[nextN],nextN });
			}
		}
	}

	cout << d[N] << "\n";
	return 0;
}
