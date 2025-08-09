#include <iostream>
using namespace std;
unsigned long long int dp[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	dp[0]=0;
	dp[1]=1;
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2];
		dp[i]%=1000000007;
	}
	cout<<dp[n]<<'\n';
}
