#include <iostream>
using namespace std;
unsigned long long int dp[101];

int main()
{
	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	dp[5]=2;
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>n;
	for(int i=6;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-5];
	}
	cout<<dp[n]<<endl; 
	}
}
