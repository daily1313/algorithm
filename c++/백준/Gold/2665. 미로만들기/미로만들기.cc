#include <iostream>
#include <queue>
#include <cstring>
#include <tuple>
#define INF 2e9;
int map[52][52];
int visited[52][52];
int n;
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
using namespace std;

void bfs(int r, int c)
{
    queue<pair<int,int>>q;
    visited[r][c] = 0;
    q.push({r,c});

    while(!q.empty())
    {
        int x, y;
        tie(x, y) = q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx = x + mov[i][0];
            int ny = y + mov[i][1];

            if(nx<0 || nx>=n || ny<0 || ny>=n) continue;

            if(map[nx][ny] == 1) 
            {
                if(visited[nx][ny] > visited[x][y])
                {
                    visited[nx][ny] = visited[x][y];
                    q.push({nx,ny});
                }
            }
            else
            {
                if(visited[nx][ny] > visited[x][y]+1)
                {   
                    visited[nx][ny] = visited[x][y]+1;
                    q.push({nx, ny}); 
                } 
            }
        }
    }   
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string input;
        cin>>input;
        for(int j=0;j<n;j++)
        {
            map[i][j] = input[j] - '0';
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            visited[i][j] = INF; // 최대 값
        }
    }

    bfs(0 , 0);
    cout<<visited[n-1][n-1]<<'\n';
    return 0;
}