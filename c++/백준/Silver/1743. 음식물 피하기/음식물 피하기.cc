#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int trash[101][101] = {0};
int n,m,k;
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
bool visited[101][101] = {false};
int cnt;
// void bfs(int x, int y)
// {
//     queue<pair<int,int>>q;
//     q.push({x,y});
//     while(!q.empty())
//     {
//         int r = q.front().first;
//         int c = q.front().second;
//         q.pop();
//         for(int i=0;i<4;i++)
//         {
//             int rr = r + mov[i][0];
//             int cc = c + mov[i][1];
//             if(rr>=1 && rr<=n && cc>=1 && rr<=m && trash[rr][cc] == 1)
//             {
//                 q.push({rr,cc});
//                 trash[rr][cc] = trash[r][c] + 1;
//             }
//         }
        
//     }
// }

int dfs(int x, int y)
{
    visited[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int rr = x + mov[i][0];
        int cc = y + mov[i][1];
        if(rr>=1 && rr<=n && cc>=1 && cc<=m && trash[rr][cc] == 1 && !visited[rr][cc])
        {
            cnt++;
            dfs(rr, cc);
        }
    }
    return cnt;
}

int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        trash[a][b] = 1;
    }

    int result = -1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cnt = 1;
            if(trash[i][j]==1 && !visited[i][j])
            {
                int count = dfs(i,j);
                if(count > result){
                    result = count;
                }
            }
        }
    }

    cout<<result;

    
}