#include <iostream>
#include <algorithm>
using namespace std;

int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int appleFarm[6][6];
bool visited[6][6];
int k, res = 0;
void dfs(int r, int c, int idx)
{
    visited[r][c] = true;
    if(r==5 && c==5 && (idx == 25 - k)) 
    {
        res++;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int rr = r + mov[i][0];
        int cc = c + mov[i][1];
        if(rr >= 1 && rr <= 5 && cc >= 1 && cc <= 5 && !visited[rr][cc] && appleFarm[rr][cc] == 0)
        {
            visited[rr][cc] = true;
            dfs(rr, cc, idx+1);
            visited[rr][cc] = false;
        }
    }
}
int main()
{
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int a, b;
        cin>>a>>b;
        appleFarm[a][b] = 1;
    }
    dfs(1, 1, 1);
    cout<<res<<'\n';
}