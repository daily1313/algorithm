#include <iostream>
using namespace std;
unsigned long long int dp[40];
int main()
{
		int n;
		dp[0]=1;
		dp[1]=1;
		
		cin>>n;
		
		for(int i=1;i<=n;i++){
			dp[i]=0;
			for(int j=0;j<i;j++){
				dp[i]+=dp[j]*dp[i-1-j];
			}
		}
		cout<<dp[n]<<endl;
}


