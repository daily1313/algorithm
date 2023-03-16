#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
char board[601][601];
bool visited[601][601];
int n, m;
int cnt = 0;
int r, c;
void dfs(int x, int y)
{
    visited[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int rr = x + mov[i][0];
        int cc = y + mov[i][1];
        if(rr>=0 && rr<n && cc>=0 && cc<m && !visited[rr][cc] && (board[rr][cc]=='I' || board[rr][cc] == 'P' || board[rr][cc] == 'O'))
        {
            if(board[rr][cc]=='O')
            { 
                dfs(rr,cc);
            }
            else if(board[rr][cc] == 'P')
            {
                cnt++;
                dfs(rr,cc);
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>board[i][j];
            if(board[i][j]=='I')
            {
                r = i;
                c = j;
            }
        }
    }

    dfs(r,c);


    if(cnt!=0)
    {
        cout<<cnt<<'\n';
        return 0;
    }
    else
    {
        cout<<"TT"<<'\n';
        return 0;
    }

}