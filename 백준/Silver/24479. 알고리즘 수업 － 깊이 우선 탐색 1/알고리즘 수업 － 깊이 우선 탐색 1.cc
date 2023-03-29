#include <iostream>
#include <algorithm>
#include <vector>
#define max 100001
using namespace std;
vector<int>graph[max];
bool visited[max];
int n, m, r;
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
int dist[max] = {0};
int cnt = 0;

void dfs(int start)
{
    if(visited[start]) return;
    visited[start] = true;
    dist[start] = ++cnt;
    for(int i=0;i<graph[start].size();i++)
    {
        int next = graph[start][i];
        if(!visited[next]) {
            dfs(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m>>r;
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(r);

    for(int i=1;i<=n;i++)
    {
        cout<<dist[i]<<'\n';
    }

    return 0;
}