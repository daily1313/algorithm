#include <iostream>
using namespace std;
unsigned long long dp[67];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	int n;
	cin>>n;
	for(int i=4;i<=67;i++){
		dp[i]=dp[i-4]+dp[i-3]+dp[i-2]+dp[i-1];
	}
	int a;
	for(int j=0;j<n;j++){
		cin>>a;
		cout<<dp[a]<<'\n';
	}
	
}
