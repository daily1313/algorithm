#include <iostream>
#include <cstring>
#include <queue>
#include <tuple>

using namespace std;
int t = 0;
int cnt = 0;
int res = 0;
int n,m;
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
bool visited[101][101];
int board[101][101];
bool bfs() 
{
    t++;
    queue<pair<int,int>>q;
    q.push({0,0});
    int cnt = 0;
    while(!q.empty())
    {
        int x, y;
        tie(x, y) = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int r = x + mov[i][0];
            int c = y + mov[i][1];

            if(r>=0 && r<n && c>=0 && c<m && !visited[r][c])
            {
                if(board[r][c]==0)
                {
                    q.push({r,c});
                }
                else
                {
                    board[r][c] = 0;
                    cnt++;
                }
                visited[r][c] = true;
            }
        }
    }
    if(cnt==0) {
        t--;
        cout<<t<<'\n';
        cout<<res<<'\n';
        return true;
    }
    else 
    {
        res = cnt;
        return false;
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
        }
    }

    while(1)
    {
        if(bfs()) break;
        memset(visited,false,sizeof(visited));
    }
}