#include <iostream>
#include <tuple>
#include <deque>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
// # : 문, $ : 죄수, * : 벽, 점 : 빈칸
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<vector<int>> bfs(vector<string> &a, int x, int y)
{
    int n = a.size();
    int m = a[0].size();

    vector<vector<int>> d(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            d[i][j] = -1;
        }
    }

    deque<pair<int, int>> q;
    q.push_back(make_pair(x, y));
    d[x][y] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        x = p.first;
        y = p.second;
        q.pop_front();
        for (int i = 0; i < 4; i++)
        {
            int r = x + mov[i][0];
            int c = y + mov[i][1];

            if (r >= 0 && r < n && c >= 0 && c < m)
            {
                if (d[r][c] != -1)
                    continue;
                if (a[r][c] == '*')
                    continue;
                if (a[r][c] == '#')
                {
                    d[r][c] = d[x][y] + 1;
                    q.push_back(make_pair(r, c));
                }
                else
                {
                    d[r][c] = d[x][y];
                    q.push_front(make_pair(r, c));
                }
            }
        }
    }

    return d;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n + 2);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = "." + a[i] + ".";
        }
        // 세로 부분 점 추가(양 끝점)

        n += 2;
        m += 2;

        for (int j = 0; j < m; j++)
        {
            a[0] += ".";     // 가장 윗부분 점 추가(가로)
            a[n + 1] += "."; // 가장 아랫부분 점 추가(가로)
        }

        // 가로 부분 점 추가하는 법

        vector<vector<int>> d0 = bfs(a, 0, 0);

        int x1, y1, x2, y2;
        x1 = y1 = x2 = y2 = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '$')
                {
                    if (x1 == -1)
                    {
                        x1 = i;
                        y1 = j;
                    }
                    else
                    {
                        x2 = i;
                        y2 = j;
                    }
                }
            }
        }
        vector<vector<int>> d1 = bfs(a, x1, y1);
        vector<vector<int>> d2 = bfs(a, x2, y2);

        int ans = n * m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '*')
                    continue;
                int cur = d0[i][j] + d1[i][j] + d2[i][j];
                if (a[i][j] == '#')
                    cur -= 2;
                if (ans > cur)
                    ans = cur;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}