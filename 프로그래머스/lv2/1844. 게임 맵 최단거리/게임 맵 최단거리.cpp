#include <bits/stdc++.h>

using namespace std;

bool visited[101][101] = {false};
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int dis[101][101];
void bfs(vector<vector<int> > maps)
{
    queue<pair<int,int>>q;
    visited[0][0] = true;
    q.push(make_pair(0,0));
    dis[0][0] = 1;
    while(!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            int rr = r + mov[k][0];
            int cc = c + mov[k][1];
            if(rr>=0 && rr<maps.size() && cc>=0 && cc<maps[0].size() && !visited[rr][cc] && maps[rr][cc] == 1)
            {
                q.push(make_pair(rr,cc));
                visited[rr][cc] = true;
                dis[rr][cc] = dis[r][c] + 1;
            }
        }
    }
    
}

int solution(vector<vector<int>> maps)
{
    memset(dis, -1, sizeof(dis));
    
    bfs(maps);
    
    return dis[maps.size()-1][maps[0].size()-1];
}