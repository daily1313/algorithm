#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;
int box[101][101][101];
int mov[6][3] = {{1,0,0},{0,1,0},{0,0,1},{-1,0,0},{0,-1,0},{0,0,-1}};
bool visited[101][101][101] = {false};
queue<tuple<int,int,int>> q;
int m,n,h;
int ans = 0;

void bfs() 
{
    while(!q.empty())
    {
        int a, b, c;
        tuple<int,int,int> t = q.front();
        a = get<0>(t);
        b = get<1>(t);
        c = get<2>(t);
        q.pop();
        for(int i=0;i<6;i++)
        {    
            int x = a + mov[i][0];
            int y = b + mov[i][1];
            int z = c + mov[i][2]; 
            if(x>=0 && y>=0 && z>=0 && x<h && y<n && z<m) 
            {
                if(box[x][y][z] == 0 && !visited[x][y][z])
                {
                    visited[x][y][z] = true;
                    q.push(make_tuple(x,y,z));
                    box[x][y][z] = box[a][b][c] + 1;
                }
            }

        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>m>>n>>h;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<n;j++) 
        {
            for(int k=0;k<m;k++)
            {
                cin>>box[i][j][k]; // 높이, 열, 행
                if(box[i][j][k]==1) 
                { 
                    q.push(make_tuple(i,j,k));
                }
            }
        }
    }

    bfs();

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<n;j++) 
        {
            for(int k=0;k<m;k++)
            {
                if(box[i][j][k]==0)
                { 
                    cout<<-1<<'\n';
                    return 0;
                }
                ans = max(ans, box[i][j][k]);
            }
        }
    }
   
    cout<<ans-1<<'\n';
    return 0;


    
}