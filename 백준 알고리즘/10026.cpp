#include <iostream>
#include <cstring>

using namespace std;

bool visited[101][101];
char board[101][101];
int n;
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
int cnt1 = 0;
int cnt2 = 0;
void dfs_colorbilndness(int x, int y)
{
    visited[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int row = x + mov[i][0];
        int col = y + mov[i][1];

        if(board[x][y]=='R' || board[x][y]== 'G')
        {
            if(row>=0 && col>=0 && row < n && col < n && !visited[row][col])
            {
                if(board[row][col]=='R' || board[row][col]=='G')
                {
                    visited[row][col] = true;
                    dfs_colorbilndness(row,col);
                }
            }
        }
        else
        {
            if(row>=0 && col>=0 && row < n && col < n && !visited[row][col])
            {
                if(board[row][col]==board[x][y])
                {
                    visited[row][col] = true;
                    dfs_colorbilndness(row,col);
                }
            }
        }
    }
}

void dfs(int x,int y)
{
    visited[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int r = x + mov[i][0];
        int c = y + mov[i][1];

        if(r>=0 && c>=0 && r<n && c<n && !visited[r][c] && board[x][y]==board[r][c])
        {
            dfs(r,c);
        }
    }
}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>board[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visited[i][j])
            {
                dfs(i,j);
                cnt1++;
            }
        }
    }
    memset(visited,false,sizeof(visited));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visited[i][j])
            {
                dfs_colorbilndness(i,j);
                cnt2++;
            }
        }
    }

    cout<<cnt1<<' '<<cnt2<<'\n';

}