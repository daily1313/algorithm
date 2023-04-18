#include <iostream>

using namespace std;
int mov[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int n, m, k;
bool visited[11][11];
int map[11][11];
int ans = -2e9;
void dfs(int idx, int sum)
{
    if(idx == k)
    {
        if(ans < sum) ans = sum;
        return;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]) continue;
            if(visited[i-1][j] || visited[i][j+1] || visited[i][j-1] || visited[i+1][j])
            {
                continue;
            }
                visited[i][j] = true;
                dfs(idx + 1, sum + map[i][j]);
                visited[i][j] = false;
            }
        }
}


int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>map[i][j];
        }
    }
    dfs(0, 0);
    cout<<ans<<'\n';
    return 0;
}