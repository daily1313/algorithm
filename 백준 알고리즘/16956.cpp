#include <iostream>
#include <vector>

using namespace std;
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool check = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'S')
            {
                for (int k = 0; k < 4; k++)
                {
                    int x = i + mov[k][0];
                    int y = j + mov[k][1];
                    if (x >= 0 && x < n && y >= 0 && y < m)
                    {
                        if (a[x][y] == 'W')
                            check = false;
                    }
                }
            }
        }
    }
    // 늑대와 양이 상하좌우 인접해있는지 check

    if (!check)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << 1 << '\n';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '.')
                    cout << 'D';
                else
                {
                    cout << a[i][j];
                }
            }
            cout << '\n';
        }
    }

    // 그렇지 않으면 .(공백) -> D(울타리)로 변경
    return 0;
}