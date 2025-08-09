#include <iostream>
#include <vector>

using namespace std;
bool check[201][201];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        check[a][b] = true;
        check[b][a] = true;
    }

    int ans = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {

            for (int k = j + 1; k <= n; k++)
            {
                if (check[i][j] || check[j][k] || check[k][i])
                    continue;
                ans += 1;
            }
        }
    }
    cout << ans;
}