#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<vector<vector<int>>>dp(101,vector<vector<int>>(101,vector<int>(101,0)));
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1.size();i++)
	{
		for(int j=1;j<=s2.size();j++)
		{
			for(int k=1;k<=s3.size();k++)
			{
				if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
					dp[i][j][k]=dp[i-1][j-1][k-1]+1;
				}
				else
				{
					dp[i][j][k] = max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
				}
			}
		}
	}
	cout<<dp[s1.size()][s2.size()][s3.size()];
}
