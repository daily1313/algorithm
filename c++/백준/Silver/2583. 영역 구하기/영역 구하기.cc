#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

bool visited[101][101];
int board[101][101];
int n,m,k;
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int cnt = 0;
using namespace std;
vector<int> rectangle;

void dfs(int i, int j)
{
    visited[i][j] = true; 
    cnt++;
    for(int k=0;k<4;k++)
    {
        int r = i + mov[k][0];
        int c = j + mov[k][1];
        if(r>=0 && r<n && c>=0 && c<m && !visited[r][c])
        {
            dfs(r,c);
        }
    }

}

int main()
{
    cin>>n>>m>>k;
    memset(visited, false, sizeof(visited));
    for(int i=0;i<k;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=y1;i<y2;i++)
        {
            for(int j=x1;j<x2;j++)
            {
                board[i][j] = 1;
                visited[i][j] = true;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==0 && !visited[i][j])
            {
                cnt = 0;
                dfs(i,j);
                rectangle.push_back(cnt);
            }
        }
    }
    sort(rectangle.begin(),rectangle.end());
    cout<<rectangle.size()<<'\n';
    for(auto elem : rectangle)
    {
        cout<<elem<<' ';
    }
    return 0;

} 