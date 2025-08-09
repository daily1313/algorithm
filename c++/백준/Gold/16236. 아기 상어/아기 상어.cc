#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;
int mov[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
// 저장 ?
// 1. 물고기 -> 위치, 크기
// 2. 아기 상어 -> 위치, 크기, 지금까지 먹은 물고기의 개수 = 경험치(exp), 크기가 변하면 0으로 초기화
// 3. 공간 -> 물고기, 상어 각 칸에 존재, 빈 칸도 존재
// 4. 크기 만큼 물고기를 먹으면 아기상어의 크기 1 증가

// 1. 상어가 먹을 수 있는 물고기를 찾고 O(N^2)
// 2. 이동해서 먹는다. O(N^2)
// 3. 거리가 가장 가까운 물고기를 먹는다. (BFS)
// 4. 상어와 물고기 사이의 거리 및 위치 저장
// O(N^4) ~= 20^4

tuple<int, int, int> bfs(vector<vector<int>> &a, int x, int y, int size)
{
    int n = a.size();
    vector<tuple<int, int, int>> ans; // 물고기까지의 거리 및 위치 정보 거리 작고, 행이 작고, 열이 작은 순서대로 정렬
    vector<vector<int>> d(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    q.push({x, y});
    d[x][y] = 0;
    while (!q.empty())
    {
        tie(x, y) = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nx = x + mov[k][0];
            int ny = y + mov[k][1];
            if (0 <= nx && nx < n && 0 <= ny && ny < n && d[nx][ny] == -1)
            {
                bool ok = false;
                bool eat = false;
                if (a[nx][ny] == 0)
                {
                    ok = true;
                }
                else if (a[nx][ny] < size)
                {
                    ok = eat = true;
                }
                else if (a[nx][ny] == size)
                {
                    ok = true;
                }
                if (ok)
                {
                    q.push({nx, ny});
                    d[nx][ny] = d[x][y] + 1;
                    if (eat)
                    {
                        ans.push_back(make_tuple(d[nx][ny], nx, ny));
                    }
                }
            }
        }
    }
    if (ans.empty())
    {
        return make_tuple(-1, -1, -1);
    }
    sort(ans.begin(), ans.end());
    return ans[0];
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    int x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 9)
            {
                tie(x, y) = make_pair(i, j);
                a[i][j] = 0;
            }
        }
    }
    int ans = 0;
    int size = 2; // 상어의 크기
    int exp = 0;  // 지금까지 먹은 물고기의 개수
    while (true)
    {
        int nx, ny, dist;
        tie(dist, nx, ny) = bfs(a, x, y, size);
        if (dist == -1)
            break;
        a[nx][ny] = 0;
        ans += dist;
        exp += 1;
        if (size == exp)
        {
            size += 1;
            exp = 0;
        }
        tie(x, y) = make_pair(nx, ny);
    }
    cout << ans << '\n';
    return 0;
}