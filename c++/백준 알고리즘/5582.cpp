#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	vector<vector<int>>dp(4001,vector<int>(4001,0));
	int result = 0;
	for(int i=1;i<=s1.size();i++)
	{
		for(int j=1;j<=s2.size();j++){
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j] = dp[i-1][j-1]+1;
				result = max(dp[i][j],result);
			}
		}
	}
	cout<< result<<'\n';
}
