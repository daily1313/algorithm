#include <iostream>
#include <cstring>
#include <queue>
#include <tuple>
using namespace std;
char people[6][6];
bool pick[25];
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int ycount = 0;
int scount = 0;
int res = 0;
bool isMoreFour() {
    int count = 0;
    for(int i=0;i<25;i++)
    {
        if(pick[i] && people[i/5][i%5]=='S') count++;
    }
    if(count>=4) return true;
    else return false;
}

bool bfs() 
{
    queue<pair<int,int>>q;
    bool visited[5][5];
    bool checked[5][5];

    memset(visited, false, sizeof(visited));
    memset(checked, false, sizeof(checked));

    bool first = true;
    for(int i=0;i<25;i++)
    {
        if(pick[i])
        {
            checked[i/5][i%5] = true;
            if(first)
            {
                first = false;
                q.push({i/5, i%5});
                visited[i/5][i%5] = true;
            }
        }
    }
    int cnt = 1;
    while(!q.empty())
    {
        int x, y;
        tie(x, y) = q.front();
        q.pop();

        if(cnt == 7) return true;

        for(int i=0;i<4;i++)
        {
            int rr = x + mov[i][0];
            int cc = y + mov[i][1];

            if(rr>=0 && rr<5 && cc>=0 && cc<5 && !visited[rr][cc] && checked[rr][cc])
            {
                q.push({rr,cc});
                visited[rr][cc] = true;
                cnt++;
            }
        }
    }
    return false;
}
void dfs(int idx, int cnt)
{
    if(cnt == 7)
    {
        if(isMoreFour() && bfs()) res++;    
        return;  
    }

    for(int i=idx;i<25;i++)
    {
        if(!pick[i]) 
        {
            pick[i] = true;
            dfs(i, cnt+1);
            pick[i] = false;
        }
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>people[i][j];
        }
    }
    
    dfs(0,0);

    cout<<res<<'\n';
}
