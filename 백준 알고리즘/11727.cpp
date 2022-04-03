#include <iostream>
using namespace std;
int dp[1001];
int main()
{
	dp[0] = 1;
	dp[1] = 3;
	int n;
	cin>>n;
	int i;
	if(n<=2){
		if(n==2){
			cout<<3<<endl;
			return 0;
		}
		else if(n==1){
			cout<<1<<endl;
			return 0;
		}
	}
	else{
		for(i=2;i<n;i++){
			dp[i] = dp[i-1]+2*dp[i-2];
			dp[i] %= 10007;	
		}
	}
	cout<<dp[n-1]<<endl;
}
