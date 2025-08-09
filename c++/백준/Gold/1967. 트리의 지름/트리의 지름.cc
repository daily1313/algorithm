#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
bool visited[100001];
int res = 0;
int now;
vector<pair<int,int>>graph[100001];
void dfs(int start, int dist)
{
    visited[start] = true;
    if(dist > res)
    {
        res = dist;
        now = start;
    }
    for(int i=0;i<graph[start].size();i++)
    {
        int next_node = graph[start][i].first;
        
        if(!visited[next_node])
        {
            visited[next_node] = true;
            dfs(next_node, graph[start][i].second + dist);
            visited[next_node] = false;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u, v, cost;
        cin>>u>>v>>cost;
        graph[u].push_back({v,cost});
        graph[v].push_back({u,cost});
    }
    dfs(1, 0);
    res = 0;
    memset(visited, false, sizeof(visited));
    dfs(now, 0);
    cout<<res<<'\n';
}