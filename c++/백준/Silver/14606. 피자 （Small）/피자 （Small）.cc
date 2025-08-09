#include <iostream>

using namespace std;
int dp[11];
int main()
{
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 3; 
    dp[4] = 6;
    dp[5] = 10;
    dp[8] = 28;

    int n;
    cin>>n;
    for(int i=4;i<=10;i++)
    {
        dp[i] = dp[i-1] + i-1;
    }
    cout<<dp[n];
}