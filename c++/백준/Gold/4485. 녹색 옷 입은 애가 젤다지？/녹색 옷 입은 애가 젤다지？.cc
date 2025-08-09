#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <climits>
#define INF INT_MAX
using namespace std;
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int cave[126][126];
int d[126][126];
int n;
int idx = 1;
void bfs()
{
    
    queue<pair<int,int>>q;
    q.push({0, 0});
    d[0][0] = cave[0][0];

    while(!q.empty()) 
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int rr = r + mov[i][0];
            int cc = c + mov[i][1];
            if(rr>=0 && rr<n && cc>=0 && cc<n) 
            {
                if(d[rr][cc] > d[r][c] + cave[rr][cc]) {
                    d[rr][cc] = d[r][c] + cave[rr][cc];
                    q.push({rr, cc});
                }
            }
        }
    }
}
int main()
{
    while(1)
    {
        cin>>n;
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>cave[i][j];
                d[i][j] = 2000000000;
            }
        }
        bfs();
        cout<<"Problem "<<idx++<<": "<<d[n-1][n-1]<<'\n';
    }
    return 0;
}