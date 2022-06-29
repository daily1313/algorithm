#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	int dp[46];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<46;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	vector<int>v;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for(int j=45; j>=1; j--){
        		if(dp[j]<=n){
            	n-=dp[j];
            	v.push_back(dp[j]);
            }
        }
        sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<' ';
		}
		cout<<'\n';
		v.clear();
	}
	
}
