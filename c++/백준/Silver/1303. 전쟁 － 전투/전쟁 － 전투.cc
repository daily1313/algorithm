#include <iostream>
#include <queue>
using namespace std;
bool visited[101][101];
char map[101][101];
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;
int res_team = 0;
int res_enemy = 0;

int bfs(int i, int j, char now){
    int cnt = 1;
    queue <pair<int, int>> q;
    q.push({i,j});
    visited[i][j] = true;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0 ; i < 4; i++){
            int nx = x + mov[i][0];
            int ny = y + mov[i][1];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if(visited[nx][ny] || map[nx][ny]!=now) continue;
            visited[nx][ny] = true;
            cnt++;
            q.push({nx,ny});
        }
    }
    return cnt * cnt;
}


int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>map[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visited[i][j])
            {
                if(map[i][j]=='W') res_team += bfs(i,j,map[i][j]);
                else res_enemy += bfs(i,j,map[i][j]);
            }
        }
    }
    cout<<res_team<<' '<<res_enemy<<'\n';
   
}