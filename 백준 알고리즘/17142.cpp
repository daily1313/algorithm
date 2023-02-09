#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m, emptyCount;
int ans = 987654321;
int board[51][51];
bool visited_virus[10] = {false};
int visited[51][51];

void bfs()
{
    queue<pair<int, int>> q;
    memset(visited, -1, sizeof(visited));

    for (int i = 0; i < v.size(); i++)
    {
        if (visited_virus[i])
        {
            q.push(make_pair(v[i].first, v[i].second));
            visited[v[i].first][v[i].second] = 0;
        }
    }
    int time = 0;
    int zero_count = 0;
    while (!q.empty())
    {
        int x, y;
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int r = x + mov[i][0];
            int c = y + mov[i][1];

            if (r >= 0 && r < n && c >= 0 && c < n)
            {
                if (board[r][c] != 1 && visited[r][c] == -1)
                {

                    visited[r][c] = visited[x][y] + 1;
                    if (board[r][c] == 0)
                    {
                        zero_count++;
                        time = visited[r][c];
                    }
                    q.push(make_pair(r, c));
                }
            }
        }
    }
    if (zero_count == emptyCount)
    {
        ans = min(ans, time);
        return;
    }
}

void select_virus(int idx, int cnt)
{
    if (cnt == m)
    {
        bfs();
        return;
    }
    else
    {
        for (int i = idx; i < v.size(); i++)
        {
            if (!visited_virus[i])
            {
                visited_virus[i] = true;
                select_virus(i + 1, cnt + 1);
                visited_virus[i] = false;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 0)
                emptyCount++;
            if (board[i][j] == 2)
                v.push_back(make_pair(i, j));
        }
    }

    select_virus(0, 0);

    if (ans == 987654321)
    {
        ans = -1;
    }
    cout << ans << '\n';

    return 0;
}