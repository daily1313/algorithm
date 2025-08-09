#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int r,c,k;
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
char house[6][6];
bool visited[6][6];
int res = 0;
void dfs(int x, int y, int idx)
{
    visited[r-1][0] = true; 
    if(idx == k && x == 0 && y == c-1)
    {
        res += 1;
        return;
    }

    for(int i=0;i<4;i++)
    {
        int rr = x + mov[i][0];
        int cc = y + mov[i][1];

        if(rr>=0 && rr<r && cc>=0 && cc<c && house[rr][cc]!='T' && !visited[rr][cc])
        {
            visited[rr][cc] = true;
            dfs(rr, cc, idx+1);
            visited[rr][cc] = false;
        }
    }
}

int main()
{
    cin>>r>>c>>k;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>house[i][j];
        }
    }

    
    dfs(r-1,0,1);

    cout<<res<<'\n';
    
}