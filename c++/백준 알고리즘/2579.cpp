#include <iostream>
#include <algorithm>
#define max 301
int dp[max];
int arr[max];
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = arr[1] + arr[3] > arr[2] + arr[3] ? arr[1] + arr[3] : arr[2] + arr[3];
	
	for(int i=4;i<301;i++)
	{
		dp[i] = dp[i-2] + arr[i] >dp[i-3] + arr[i] + arr[i-1] ? dp[i-2] + arr[i] : dp[i-3] + arr[i] + arr[i-1]; 	
	}
	cout<<dp[n]; 
}
