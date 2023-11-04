#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

vector<string> a;
int n, ans;
int color[50][50];
int mov[6][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}, {1, -1}, {-1, 1}};

void dfs(int x, int y, int c)
{
    color[x][y] = c; // 색 C로 칠함
    ans = max(ans, 1); // 정답이 0이 아님 -> DFS를 호출했기 때문
    for (int k = 0; k < 6; k++)
    {
        int nx = x + mov[k][0];
        int ny = y + mov[k][1];
        if (nx >= 0 && nx < n && ny >= 0 && ny < n)
        {
            // 색칠해야 하는 경우
            if (a[nx][ny] == 'X')
            {
                if (color[nx][ny] == -1) // 색칠을 하지 않은 경우 
                {
                    dfs(nx, ny, 1 - c); // 반복적으로 0, 1, 0, 1의 색을 입힘
                }
                ans = max(ans, 2); // 정답이 2인 경우
                if (color[nx][ny] == c) // 방문한 적이 있는 경우
                {
                    ans = max(ans, 3); // 이분그래프 X
                }
            }
        }
    }
}
int main()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(color, -1, sizeof(color));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'X' && color[i][j] == -1)
            {
                dfs(i, j, 0);
            }
        }
    }
    cout << ans << '\n';
}
