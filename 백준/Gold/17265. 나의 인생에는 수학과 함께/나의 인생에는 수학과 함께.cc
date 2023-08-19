#include <iostream>
#include <algorithm>

using namespace std;

char board[5][5];
int mov[2][2] = {{1, 0}, {0, 1}};
int n;
int min_res = 2e9, max_res = -2e9;
void dfs(int x, int y, int res)
{
    if (x == n - 1 && y == n - 1)
    {
        if (res < min_res)
            min_res = res;
        if (res > max_res)
            max_res = res;
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        int r = x + mov[i][0];
        int c = y + mov[i][1];

        int next_res = res;

        if (r < n && c < n)
        {
            if (board[x][y] == '-')
            {
                next_res -= (board[r][c] - '0');
            }
            if (board[x][y] == '+')
            {
                next_res += (board[r][c] - '0');
            }
            if (board[x][y] == '*')
            {
                next_res *= (board[r][c] - '0');
            }
            dfs(r, c, next_res);
        }
    }
}
void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
}
int main()
{
    input();
    dfs(0, 0, board[0][0] - '0');
    cout << max_res << ' ' << min_res << '\n';
}