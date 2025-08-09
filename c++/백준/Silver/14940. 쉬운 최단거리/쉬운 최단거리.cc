#include <iostream>
#include <queue>

int mov[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
int dist[1001][1001];
bool visited[1001][1001];
int n, m;
int startpoint_x, startpoint_y;
using namespace std;

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    dist[x][y] = 0;
    q.push({x, y});
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int r = now.first + mov[i][0];
            int c = now.second + mov[i][1];
            if (dist[r][c] == 1 && !visited[r][c])
            {
                dist[r][c] = dist[now.first][now.second] + 1;
                visited[r][c] = true;
                q.push({r, c});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> dist[i][j];
            if (dist[i][j] == 2)
            {
                startpoint_x = i;
                startpoint_y = j;
            }
        }
    }
    bfs(startpoint_x, startpoint_y);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && dist[i][j] != 0)
                cout << -1 << ' ';
            else
                cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
}