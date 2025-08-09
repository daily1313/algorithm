#include <iostream>
#include <queue>

using namespace std;
int dist[101][101];
int map[101][101];
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;
void bfs(int x, int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    dist[x][y] = 0;

    while(!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int rr = r + mov[i][0];
            int cc = c + mov[i][1];

            if(rr>=0 && rr<n && cc>=0 && cc<m) 
            {
                if(map[rr][cc] == 0 && dist[rr][cc] > dist[r][c])
                {
                    dist[rr][cc] = dist[r][c];
                    q.push({rr,cc});
                }
                else if(map[rr][cc] == 1 && dist[rr][cc] > dist[r][c] + 1)
                {
                    dist[rr][cc] = dist[r][c] + 1;
                    q.push({rr,cc});
                }
            }
        }
    }
}
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        string input;
        cin>>input;
        for(int j=0;j<m;j++)
        {
            map[i][j] = input[j] - '0';
            dist[i][j] = 987654321;
        }
    }
    bfs(0, 0);
    cout<<dist[n-1][m-1]<<'\n';
}