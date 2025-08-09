#include <iostream>

int colors[1001][1001];
bool visited[1001][1001] = {false};
int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
using namespace std;
int res = 0;

void dfs(int x, int y)
{
    visited[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int r = x + mov[i][0];
        int c = y + mov[i][1];

        if(r>=0 && r<n && c>=0 && c<m && !visited[r][c] && colors[r][c] == 255)
        {
            dfs(r, c);
        }
    }
}

int main()
{
    cin>>n>>m;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int r, g, b;
            cin>>r>>g>>b;
            colors[i][j] = (r+g+b) / 3;
        }
    }
    int T; 
    cin>>T;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(colors[i][j] >= T) colors[i][j] = 255;
            else colors[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j] && colors[i][j] == 255) 
            {
                res++;
                dfs(i, j);
            }
        }
    }
    cout<<res<<'\n';

}

