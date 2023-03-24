#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

int dist[300001];
vector<int>graph[300001];
int n, m, k, x;
void dijkstra(int start)
{
    queue<int>q;
    q.push(start);
    dist[start] = 0;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();

        for(int i=0;i<graph[now].size();i++)
        {            
            int next = graph[now][i];
            if(dist[next] > dist[now] + 1)
            {
                dist[next] = dist[now] + 1;
                q.push(next);
            }
        }
    }    
}
int main()
{
    cin>>n>>m>>k>>x;

    for(int i=1;i<=n;i++)
    {
        dist[i] = 2e9;
    }

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    dijkstra(x);
    bool check = false;
    for(int i=1;i<=n;i++)
    {
        if(dist[i]==k) 
        {
            check = true;
            cout<<i<<'\n';
        }
    }
    if(!check) cout<<-1<<'\n';
    return 0;
}