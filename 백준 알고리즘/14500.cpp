#include <iostream>
using namespace std;
int a[501][501];
bool check[501][501];
int n, m;
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int ans = 0;
void go(int x, int y, int sum, int cnt)
{
    if (cnt == 4)
    {
        if (ans < sum)
            ans = sum;
        return;
    }

    if (x < 0 || x >= n || y < 0 || y >= m)
        return;
    if (check[x][y])
        return;
    check[x][y] = true;
    for (int k = 0; k < 4; k++)
    {
        go(x + mov[k][0], y + mov[k][1], sum + a[x][y], cnt + 1);
    }
    check[x][y] = false;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            go(i, j, 0, 0);
            if (j + 2 < m)
            {
                int temp = a[i][j] + a[i][j + 1] + a[i][j + 2];
                if (i - 1 >= 0)
                {
                    int temp2 = temp + a[i - 1][j + 1];
                    ans = max(ans, temp2);
                }
                // ㅗ
                if (i + 1 < n)
                {
                    int temp2 = temp + a[i + 1][j + 1];
                    ans = max(ans, temp2);
                }
                // ㅜ
            }
            if (i + 2 < n)
            {
                int temp = a[i][j] + a[i + 1][j] + a[i + 2][j];
                if (j - 1 >= 0)
                {
                    int temp2 = temp + a[i + 1][j - 1];
                    ans = max(ans, temp2);
                }
                // ㅓ
                if (j + 1 < m)
                {
                    int temp2 = temp + a[i + 1][j + 1];
                    ans = max(ans, temp2);
                }
                // ㅏ
            }
        }
    }
    cout << ans << '\n';
}