#include <iostream>

using namespace std;
int t;

int main()
{
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int coins[21] = {0};
        int dp[10001] = {0};
        for(int i=1;i<=n;i++)
        {
            cin>>coins[i];
        }
        int money;
        cin>>money;
        

        dp[0] = 1;

        for(int i=1;i<=n;i++)
        {
            for(int j = coins[i]; j<=money; j++)
            {
                dp[j] += dp[j-coins[i]];
            }
        }
        cout<<dp[money]<<'\n';
    }

}

//   1 2 3 4 5 6 7 8 9 10
//1  1 1 1 1 1 1 1 1 1 1
//2  0 1 1 2 2 3 3 4 4 5
//5  0 0 0 0 1 1 2 2 3 4 
//     2 2 3 4 5 5 7 8 10 