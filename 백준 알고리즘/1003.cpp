#include <iostream>
using namespace std;
long long int dp[41];
long long int fibo(int n);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	dp[0]=0;
	dp[1]=1;
	
	int t;
	cin>>t;
	int a;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		if(a==0){
			cout<<0<<' '<<1<<'\n';
		}
		else{
		cout<<fibo(a-1)<<' '<<fibo(a)<<'\n';
		}
	}
}
long long int fibo(int n)
{
	if(dp[n]!=0){
		return dp[n];
	}
	
	if(n==0){
		dp[n]=0;
		return dp[n];
	}
	else if(n==1){
		dp[n]=1;
		return dp[n];
	}
	else{
		dp[n] = fibo(n-1)+ fibo(n-2);
	}
		return dp[n];
}
