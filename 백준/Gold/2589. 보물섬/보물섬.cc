#include <iostream>
#include <queue>
#include <cstring>
#include <tuple>
using namespace std;
int n,m;
char map[51][51];
bool visited[51][51];
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int d[51][51];
int maxi = -1;
void bfs(int x, int y)
{
    queue<pair<int, int>>q;
    q.push({x, y});
    d[x][y] = 0;
    while(!q.empty()) {
        
        int r, c;
        tie (r, c) = q.front();
        q.pop();
    
        for(int i=0;i<4;i++)
        {
            int rr = r + mov[i][0];
            int cc = c + mov[i][1];
            if(rr>=0 && rr<n && cc>=0 && cc<m && map[rr][cc] == 'L') {
                if(d[rr][cc]== -1)
                {
                    q.push({rr,cc});
                    d[rr][cc] = d[r][c] + 1;
                    maxi = max(d[rr][cc], maxi);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			d[i][j] = -1;
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
            cin>>map[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            d[i][j] = -1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(map[i][j]=='L' && d[i][j] == -1) {
                bfs(i,j);
            }
        }
    }
    cout<<maxi<<'\n';
    return 0;
}