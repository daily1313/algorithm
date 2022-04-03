#include <iostream>
using namespace std;
int dp[1001];
int main()
{
	dp[1]=0;
	dp[2]=1;
	dp[3]=0;
	dp[4]=1;
	dp[5]=1;
	int n;
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
