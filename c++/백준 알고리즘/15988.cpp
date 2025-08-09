#include <iostream>
#include <cmath>
using namespace std;
unsigned long long int dp[1000001];
int main()
{
	
	int t;
	int i;
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	
	cin>>t;
	int n;
	int j;
	for(j=0;j<t;j++){
		cin>>n;
		for(i=3;i<n;i++){
			dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
			dp[i] %= 1000000009;
		}
		cout<<dp[n-1]<<endl;
		
	}
	
	
}
