#include <iostream>

using namespace std;
int dp[15][15];
int main()
{
    int t;
    int k, n; // a층 b호

    cin >> t;

    for (int i = 0; i <= 14; i++)
    {
        dp[i][0] = 0;
        dp[0][i] = i;
    }

    while (t--)
    {
        cin >> k >> n;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
        cout << dp[k][n] << '\n';
    }
}