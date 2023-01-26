#include <iostream>
#include <algorithm>

using namespace std;
int dp[1001][1001];
int a[1001][1001];
//Top-down
int go(int i, int j)
{
    if(i< 1|| j < 1) return 0;
    dp[i][j] = max(go(i-1, j), go(i,j-1)) + a[i][j];
    return dp[i][j];
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    // Tabulation, Bottom-up 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = max(max(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + a[i][j];
        }
    }
    cout << dp[n][m] << '\n';

    //Tabulation, Bottom-up
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    cout << dp[n][m] << '\n';

    dp[1][1] = 0;
    dp[2][1] = 0;
    dp[1][2] = 0;
    //Bottom-up
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (dp[i][j + 1] < dp[i][j] + a[i][j + 1])
            {
                dp[i][j + 1] = dp[i][j] + a[i][j + 1];
            }
            if (dp[i + 1][j] < dp[i][j] + a[i + 1][j])
            {
                dp[i + 1][j] = dp[i][j] + a[i + 1][j];
            }
            if (dp[i + 1][j + 1] < dp[i][j] + a[i + 1][j + 1])
            {
                dp[i + 1][j + 1] = dp[i][j] + a[i + 1][j + 1];
            }
        }
    }
    cout << dp[n][m]<<'\n';
    cout<<go(n,m)<<'\n';
}