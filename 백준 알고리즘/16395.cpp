#include <iostream>
using namespace std;
unsigned long long int dp[31][31];
int main()
{
	
	int n,k;
	cin>>n>>k;
	dp[0][0]=1; 
	for(int i=1;i<n;i++){
		dp[i][0]= dp[i][i]=1;
	}
	for(int i=2;i<n;i++){
		for(int j=1;j<i;j++){
			dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}
	cout<<dp[n-1][k-1]<<endl;
	
	
}
