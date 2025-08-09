#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <memory.h>
#define max 101 

using namespace std;
int h,w;
char grid[max][max];
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
bool visited[max][max];

void dfs(int x, int y)
{
    visited[x][y] = true;
    for(int i=0;i<4;i++)
    {
        int r = x + mov[i][0];
        int c = y + mov[i][1];
        if(r>=0 && r<h && c>=0 && c<w && grid[r][c] == '#' && !visited[r][c])
        {
            dfs(r,c);
        }
    }
}

int main()
{
    int t;
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &h, &w);
        int count = 0;
        
        for(int i=0;i<h;i++)
        {
            scanf("%s", grid[i]);   
        }
        
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(grid[i][j]=='#' && !visited[i][j])
                {
                    dfs(i,j);
                    count++;
                }
            }
        }

        printf("%d\n",count);
        memset(visited, false, sizeof(visited));
        
    }

    return 0;

}