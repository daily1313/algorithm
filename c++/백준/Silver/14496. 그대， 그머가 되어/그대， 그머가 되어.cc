#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int n, m;
vector<int>graph[1001];
bool visited[1001];
int dist[1001];
int a, b;
void bfs(int start)
{
    queue<int>q;
    dist[start] = 0;
    q.push(start);
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        if(now == b) return; 
        for(int i=0;i<graph[now].size();i++)
        {
            int next = graph[now][i];
            if(visited[next]) continue;
            visited[next] = true;
            dist[next] = dist[now] + 1;
            q.push(next);
        }
    }   
}

int main()
{
    
    cin>>a>>b;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        if(a==b) 
        {
            cout<<0<<'\n';
            return 0;
        }
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }
    bfs(a);
    if(dist[b] == 0) cout<<-1<<'\n';
    else cout<<dist[b]<<'\n';
}