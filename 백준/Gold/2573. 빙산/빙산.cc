#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int N, M;
int graph[300][300];
int tmp[300][300];
bool visited[300][300];
int mov[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };

void bfs(int r, int c) {
	queue<pair<int, int>>q;
	q.push({ r,c });

	while (!q.empty()) {
		int cr = q.front().first;
		int cc = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nr = cr + mov[i][0];
			int nc = cc + mov[i][1];

			if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
				if (graph[nr][nc] != 0 && !visited[nr][nc]) {
					q.push({ nr,nc });
					visited[nr][nc] = true;
				}
			}
		}
	}
}
void meltIce() {
	memset(tmp, 0, sizeof(tmp));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (graph[i][j] == 0) continue;
			int blank = 0; 
			for (int k = 0; k < 4; k++) {
				int nx = i + mov[k][0];
				int ny = j + mov[k][1];
				if (nx >= 0 && ny >= 0 && nx < N && ny < M)
                {
				    if (graph[nx][ny] == 0) {
					    blank++;
				    }
                }
			}
			int val = graph[i][j] - blank;
			if (val > 0) tmp[i][j] = val;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			graph[i][j] = tmp[i][j];
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> graph[i][j];
		}
	}

	int ans = 0;
	while (1) {
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (!visited[i][j] && graph[i][j] != 0) {
					bfs(i, j);
					cnt++;
				}
			}
		}
		if (cnt == 0) {
			cout << 0;
			break;
		}
		else if (cnt >= 2) {
			cout << ans;
			break;
		}

		ans++;
		meltIce();
		memset(visited, false, sizeof(visited));

	}
	return 0;
}