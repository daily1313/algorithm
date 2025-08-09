#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int mov[6][2] = {{-2, -1}, {-2, 1}, {0, -2}, {0, 2}, {2, -1}, {2, 1}};
int dist[200][200];

int main()
{
    int n;
    cin >> n;
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey; // 시작점, 도착점
    memset(dist, -1, sizeof(dist));
    // 방문여부 처음에는 방문하지 않았으므로 -1로 초기화
    dist[sx][sy] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k = 0; k < 6; k++)
        {
            int nx = x + mov[k][0];
            int ny = y + mov[k][1];

            if (0 <= nx && nx < n && 0 <= ny && ny < n)
            {
                if (dist[nx][ny] == -1)
                {
                    q.push(make_pair(nx, ny));
                    dist[nx][ny] = dist[x][y] + 1;
                }
            }
        }
    }
    cout << dist[ex][ey] << '\n';
    return 0;
}