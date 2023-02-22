#include <bits/stdc++.h>

using namespace std;
int dp[501][501];
int solution(vector<vector<int>> triangle) {
    dp[0][0] = triangle[0][0];
    int n = triangle.size();
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            dp[i][j] = dp[i-1][j] + triangle[i][j];
            if(j-1>=0 && dp[i][j] < dp[i-1][j-1] + triangle[i][j]) dp[i][j] = dp[i-1][j-1] + triangle[i][j];
        }
    }
    int answer = -1;
    for(int i=0;i<n;i++)
    {
        if(dp[n-1][i] > answer)
        {
            answer = dp[n-1][i];
        }
    }
    
    
    return answer;
}