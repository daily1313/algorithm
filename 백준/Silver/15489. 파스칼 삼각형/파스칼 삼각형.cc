#include <iostream>

using namespace std;

int main()
{
    int dp[31][31];
    int R,C,W;
    cin>>R>>C>>W;

    dp[1][1] = 1;

    for(int i=1;i<=30;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    int sum = 0;
    int cnt = 1;
    for(int i=R;i<R+W;i++)
    {
        for(int j=C;j<C+cnt;j++)
        {
            sum += dp[i][j];
        }
        cnt++;
        if(cnt == W+1) break;
    }
    cout<<sum<<'\n';

}