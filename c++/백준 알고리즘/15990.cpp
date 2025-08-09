#include <iostream>
using namespace std;
const long long mod = 1000000009LL;
int dp[1000001][4];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	
	for (int i=1; i<=100000; i++) {
        if (i-1 >= 0) {
            dp[i][1] = dp[i-1][2] + dp[i-1][3];
            if (i == 1) {
                dp[i][1] = 1;
            }
        }
        if (i-2 >= 0) {
            dp[i][2] = dp[i-2][1] + dp[i-2][3];
            if (i == 2) {
                dp[i][2] = 1;
            }
        }
        if (i-3 >= 0) {
            dp[i][3] = dp[i-3][1] + dp[i-3][2];
            if (i == 3) {
                dp[i][3] = 1;
            }
        }
        dp[i][1] %= mod;
        dp[i][2] %= mod;
        dp[i][3] %= mod;
    }
    while(t--){
	int n;
	cin>>n;
    cout<<(dp[n][1]+dp[n][2]+dp[n][3])%mod<<'\n';
	}
}
