#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
int a[1001][1001];    // 입력
int d[1001][1001][2]; // d[x][y][z] : x,y (행, 열), z (벽을 부순 횟수)
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// 빈칸 -> 빈칸 (ok), 빈 칸 -> 벽 (가능할 수 있다.), 벽 -> 빈 칸(항상), 벽->벽(x, 벽을 한번만 부술 시 있기 때문이다.)
// 정점 (r, c(위치), k(벽을 부순 횟수))
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = input[j] - '0';
        }
    }
    queue<tuple<int, int, int>> q;
    d[0][0][0] = 1;
    q.push(make_tuple(0, 0, 0));
    while (!q.empty())
    {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int z = get<2>(q.front());
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int r = x + mov[i][0];
            int c = y + mov[i][1];
            if (r >= 0 && r < n && c >= 0 && c < m)
            {
                if (a[r][c] == 0 && d[r][c][z] == 0)
                {
                    d[r][c][z] = d[x][y][z] + 1;
                    q.push(make_tuple(r, c, z));
                }
                // 벽을 부술 경우
                if (z == 0 && a[r][c] == 1 && d[r][c][z + 1] == 0)
                {
                    d[r][c][z + 1] = d[x][y][z] + 1;
                    q.push(make_tuple(r, c, z + 1));
                }
            }
        }
    }
    if (d[n - 1][m - 1][0] != 0 && d[n - 1][m - 1][1] != 0)
    {
        cout << min(d[n - 1][m - 1][0], d[n - 1][m - 1][1]);
    }
    else if (d[n - 1][m - 1][0] != 0)
    {
        cout << d[n - 1][m - 1][0];
    }
    else if (d[n - 1][m - 1][1] != 0)
    {
        cout << d[n - 1][m - 1][1];
    }
    else
    {
        cout << -1;
    }
}