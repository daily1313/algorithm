#include <iostream>
#include <queue>
using namespace std;
int n, m;
int a[50][50];
int d[50][50];     // 방의 번호
int room[2501]; // i번 방의 크기
int mov[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
// 벽의 개수 동: 4, 서 : 1, 남: 8, 북: 2
// 1. 성에 있는 방의 개수, 2. 가장 넓은 방의 넓이, 3. 하나의 벽을 제거하여 얻을 수 있는 가장 넓은 방의 크기

int bfs(int x, int y, int rooms)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    d[x][y] = rooms;
    int cnt = 0;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        cnt += 1; // 방의 크기
        for (int k = 0; k < 4; k++)
        {
            int nx = x + mov[k][0];
            int ny = y + mov[k][1];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (d[nx][ny] != 0)
                continue; // 방문 검사
            if (a[x][y] & (1 << k))
                continue; // 벽 검사
            q.push({nx, ny});
            d[nx][ny] = rooms;
        }
    }
    return cnt;
}

int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int rooms = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (d[i][j] == 0)
            {
                rooms += 1;
                room[rooms] = bfs(i, j, rooms);
            }
        }
    }
    cout << rooms << '\n';
    int ans = 0;
    for (int i = 1; i <= rooms; i++)
    {
        if (ans < room[i])
        {
            ans = room[i];
        }
    }
    cout << ans << '\n';
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = i;
            int y = j;
            for (int k = 0; k < 4; k++)
            {
                int nx = x + mov[k][0];
                int ny = y + mov[k][1];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;
                if (d[nx][ny] == d[x][y])
                    continue;
                if (a[x][y] & (1 << k))
                {
                    if (ans < room[d[x][y]] + room[d[nx][ny]])
                    {
                        ans = room[d[x][y]] + room[d[nx][ny]];
                    }
                }
            }
        }
    }
    cout << ans << '\n';
}