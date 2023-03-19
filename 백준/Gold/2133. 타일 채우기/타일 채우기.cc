#include <iostream>

using namespace std;

int main()
{
    int n;
    int dp[31];
    dp[0] = 1, dp[2] = 3;
    for(int i=1;i<=30;i+=2)
    {
        dp[i] = 0;
    }
    cin>>n;
    for(int i=4;i<=n;i+=2)
    {
        dp[i] = 3 * dp[i-2];
        for(int j=4;j<=i;j+=2)
        {
            dp[i] += 2 * dp[i-j];
        }
    }
    cout<<dp[n]<<'\n';
    return 0;
}

// dp[2] = 3
// dp[4] = dp[2] * dp[2](3) + 2(예외)
// dp[6] = dp[4] * dp[2](3) + dp[2] * 2(예외)
// dp[8] = dp[6] * dp[2] + dp[4] * 2 + dp[2] * 2 + 2 


