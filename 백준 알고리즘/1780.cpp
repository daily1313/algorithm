#include <iostream>

using namespace std;
int a[2200][2200];
int cnt[3];

bool same(int x, int y, int n)
{
    for (int i = x; i < x + n; i++)
    {
        for (int j = y; j < y + n; j++)
        {
            if (a[x][y] != a[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
void solve(int x, int y, int n)
{
    if (same(x, y, n))
    {
        if (a[x][y] == -1)
        {
            ++cnt[0];
        }
        else if (a[x][y] == 0)
        {
            ++cnt[1];
        }
        else
        {
            ++cnt[2];
        }
        return;
    }
    int m = n / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            solve(x + i * m, y + j * m, m);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    solve(0, 0, n);
    cout << cnt[0] << '\n';
    cout << cnt[1] << '\n';
    cout << cnt[2] << '\n';
}