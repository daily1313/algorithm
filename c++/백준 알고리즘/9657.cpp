#include <iostream>
using namespace std;
unsigned long long int dp[100];
int main()
{
	dp[1]=1;
	dp[2]=0;
	dp[3]=1;
	dp[4]=1;
	dp[5]=1;
	unsigned long long int n;
	cin>>n;
	for(int i=6;i<=n;i++){
		if(dp[i-1]+dp[i-3]+dp[i-4]<3){
			dp[i]=1;
		}
		else{
			dp[i]=0;
		}
	}
	if(dp[n]==0){
		cout<<"CY"<<endl;
	}
	else{
		cout<<"SK"<<endl;
	}
	
}
