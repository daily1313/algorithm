#include <iostream>
using namespace std;
unsigned long long int dp[31][31];
int main()
{
	
	int r,c,w;
	dp[0][0]=1; 
	for(int i=1;i<30;i++){
		dp[i][0]= dp[i][i]=1;
	}
	for(int i=2;i<30;i++){
		for(int j=1;j<i;j++){
			dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}
	cin>>r>>c>>w;
	unsigned long long int sum=0;
	for(int i=1;i<=w;i++){
		for(int j=0;j<i;j++){
			sum+=dp[r-1][j];
		}
		r++;
		
	}
	cout<<sum<<endl;
	
	
	
}
