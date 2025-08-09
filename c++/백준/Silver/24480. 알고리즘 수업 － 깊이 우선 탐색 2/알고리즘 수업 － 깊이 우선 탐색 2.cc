#include <iostream>
#include <vector>
#include <algorithm>

#define max 100001
using namespace std;
int visited[max];
int n;
vector<int>graph[max];
int result[max];
int first = 0;
void dfs(int start)
{
    if(visited[start]==1) return;

    visited[start] = 1;
    
    result[start] = ++first;

    for(int next=0;next<graph[start].size();next++)
    {
        dfs(graph[start][next]);
    }
    
}

int main()
{
    int m,r;
    cin>>n>>m>>r;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1;i<=n;i++)
    {
        sort(graph[i].begin(),graph[i].end(),greater<int>());
    }
    dfs(r);

    for(int i=1;i<=n;i++)
    {
        cout<<result[i]<<'\n';
    }

    return 0;
    
}