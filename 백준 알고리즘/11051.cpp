#include <iostream>
using namespace std;
int n,k;

unsigned long long dp[1001][1001];
unsigned long long ans;
unsigned long long combination(int n, int r)
{
    if(dp[n][r]) return dp[n][r]; //memorization
    if(n==1 || n==r || r==0) ans = 1;
    else ans = combination(n-1,r) + combination(n-1,r-1);
    ans %= 10007;
    dp[n][r] = ans; 
    return dp[n][r];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    cout<<combination(n,k)<<'\n';
}
