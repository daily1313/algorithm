#include <iostream>
#include <algorithm>

using namespace std;

char board[21][21];
bool visited[26];



int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
int max_cnt = 0;
int r,c;
void dfs(int x,int y, int cnt)
{
    
    visited[board[x][y] - 'A'] = true;

    max_cnt = max(max_cnt, cnt);

    for(int i=0;i<4;i++)
    {
        int row = x + mov[i][0];
        int col = y + mov[i][1];

        if(row>=0 && col>=0 && row<r && col<c && !visited[board[row][col]-'A']
        )
        {
            visited[board[row][col]-'A'] = true;
            dfs(row, col, cnt+1);
            visited[board[row][col]-'A'] = false;
        }
    } 
}


int main()
{
    
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>board[i][j];
        }
    }

    dfs(0,0,1);

    cout<<max_cnt<<'\n';
}