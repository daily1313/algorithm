#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	vector<int>dp(k+1);
	dp[0]=0;
	for(int i=1;i<=k;i++){
		dp[i]=10000000;
	}
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<n;i++)
	{
		for(int j=v[i];j<=k;j++)
		{
			dp[j] = min(dp[j],dp[j-v[i]]+1);
		}
	}
	if(dp[k]==10000000) cout<<-1;
	
	else cout<<dp[k];
}
