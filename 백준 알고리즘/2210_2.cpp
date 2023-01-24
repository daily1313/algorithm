#include <iostream>
#include <set>
#define n 5
using namespace std;

set<int> ans;
int a[6][6];
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
void go(int x, int y, int num, int len)
{
    if (len == 6)
    {
        ans.insert(num);
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int nx = x + mov[k][0];
        int ny = y + mov[k][1];
        if (nx >= 0 && nx < n && ny >= 0 && ny < n)
        {
            go(nx, ny, num * 10 + a[nx][ny], len + 1);
        }
    }
}
int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            go(i, j, a[i][j], 1);
        }
    }
    cout << ans.size() << '\n';
}