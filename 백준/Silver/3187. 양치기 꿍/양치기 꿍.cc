#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
char area[251][251];
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
bool visited[251][251] = {false};
int n,m;
int answ = 0;
int anss = 0;
int countw = 0;
int counts = 0;
void dfs(int x, int y)
{
    visited[x][y] = true;
    
    if(area[x][y]=='v') countw++;
    if(area[x][y]=='k') counts++;

    for(int i=0;i<4;i++)
    {
        int rr = x + mov[i][0];
        int cc = y + mov[i][1];
        if(rr>=0 && rr<n && cc>=0 && cc<m && !visited[rr][cc] && area[rr][cc] != '#')
        {
            dfs(rr,cc);
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
            cin>>area[i][j];
            if (area[i][j] == 'v')
				answ++;
			if (area[i][j] == 'k')
				anss++;
        }
    }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            counts = 0;
            countw = 0;
            if(!visited[i][j] && area[i][j] != '#')
            {
                dfs(i, j);
            }
            
            if(countw >= counts) anss -= counts;
            else answ -= countw;
        }
    }

    cout<<anss<<' '<<answ<<'\n';
    return 0;
}