#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
int n,m;
int graph[300][300];
int tmp[300][300];
bool check[300][300];
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int ans = 0;

void dfs(int i, int j)
{
    check[i][j] = true;
    for(int k=0;k<4;k++)
    {
        int r = i + mov[k][0];
        int c = j + mov[k][1];

        if(r>=0 && r<n && c>=0 && c<m && !check[r][c] && graph[r][c]>0)
        {
            dfs(r,c);
        }
    }
}

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

			if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
				if (graph[nr][nc] != 0 && !check[nr][nc]) {
					q.push({ nr,nc });
					check[nr][nc] = true;
				}
			}
		}
	}
}

void melt()
{
    memset(tmp, 0, sizeof(tmp));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (graph[i][j] == 0) continue;
			int blank = 0; 
			for (int k = 0; k < 4; k++) {
				int nx = i + mov[k][0];
				int ny = j + mov[k][1];
				if (nx >= 0 && ny >= 0 && nx < n && ny < m)
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

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			graph[i][j] = tmp[i][j];
		}
	}
}


int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>graph[i][j];
        }
    }

    while (1) {
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!check[i][j] && graph[i][j] != 0) {
					dfs(i, j);
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
		melt();
		memset(check, false, sizeof(check));

	}

    return 0;
}