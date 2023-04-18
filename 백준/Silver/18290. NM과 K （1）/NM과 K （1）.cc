#include <iostream>

using namespace std;
int mov[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int n, m, k;
bool check[11][11];
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
            if(check[i][j]) continue;
            bool ok = true;
            for(int k=0;k<4;k++)
            {
                int r = i + mov[k][0];
                int c = j + mov[k][1];

                if(r>=0 && r<n && c>=0 && c<m)
                {
                    if(check[r][c]) ok = false;
                }
            }
            if(ok) 
            {
                check[i][j] = true;
                dfs(idx + 1, sum + map[i][j]);
                check[i][j] = false;
            }
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