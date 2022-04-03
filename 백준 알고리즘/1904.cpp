#include <iostream>
using namespace std;
int dp[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	dp[1]=1;
	dp[2]=2;
	int n;
	cin>>n;
	for(int i=3;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2];
		dp[i]%=15746;
	}
	cout<<dp[n]<<endl;
	
}
