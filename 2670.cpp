#include <iostream>
#include <algorithm>
using namespace std;
double dp[10001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>dp[i];
	}
	for(int i=0;i<n-2;i++){
		dp[i]=dp[i]*dp[i+1]*dp[i+2];
	}
	cout<<fixed;
	double result = *max_element(dp,dp+(n-2));
	cout.precision(3);
	cout<<result<<'\n';
}
