#include <iostream>

using namespace std;

long long dp[1500001];
// 피사노 주기
// M = 10 ^ k (k>2) -> N % (15 * 10 ^(k-1))
int main()
{
    long long n;
    cin>>n;
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=1500001;i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000;
    }
    n%=1500000;
    cout<<dp[n]<<'\n';
    return 0;
}