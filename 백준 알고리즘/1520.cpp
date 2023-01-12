#include <iostream>
#include <cstring>

using namespace std;

int board[501][501];
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
int dp[501][501];
int n,m;
int cnt=0;

int dfs(int x, int y)
{
    if(x == m-1 && y == n-1)
    { 
        return 1;
    }

    if(dp[x][y]!= -1) return dp[x][y];
    else 
    {
        dp[x][y] = 0;
        for(int i=0;i<4;i++)
        {   
            int row = x + mov[i][0];
            int col = y + mov[i][1];
            
            if(row >= 0 && col >= 0 && row < m && col < n )
            {
                if(board[row][col] < board[x][y]) dp[x][y] += dfs(row,col);
            }
        }
    }
   

    return dp[x][y];

}


int main()
{
    
    cin>>m>>n;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>board[i][j];
        }
    }

    memset(dp,-1,sizeof(dp));
    

    cout<<dfs(0,0)<<'\n';
}