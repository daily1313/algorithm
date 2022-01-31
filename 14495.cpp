#include <iostream>
using namespace std;
unsigned long long int dp[117];
int main()
{
	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	int n;
	cin>>n;
	for(int i=4;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-3];
	}
	cout<<dp[n]<<'\n';
}
