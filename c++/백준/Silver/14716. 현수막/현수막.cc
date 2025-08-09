#include <iostream>

using namespace std;
int mov[8][2] = {{-1,0},{1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int board[251][251];
int n,m;
bool visited[251][251];
int cnt = 0;
void dfs(int x, int y)
{
    visited[x][y] = true;
    for(int i=0;i<8;i++)
    {
        int r = x + mov[i][0];
        int c = y + mov[i][1];
        if(r>=0 && r<n && c>=0 && c<m && !visited[r][c] && board[r][c]==1) 
        {
            dfs(r,c);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>board[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==1 && !visited[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout<<cnt<<'\n';

}