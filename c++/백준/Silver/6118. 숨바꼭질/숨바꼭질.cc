#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
int n, m;
vector<int>graph[20001];
vector<int>max_list;
int dist[20001];
int maxi = -1;
bool visited[20001];
void bfs(int start) 
{
    queue<int>q;
    q.push(start);
    dist[start] = 0;
    visited[start] = true;

    while(!q.empty())
    {
        int now = q.front();
        q.pop();

        for(int i=0;i<graph[now].size();i++)
        {
            int next = graph[now][i];

            if(!visited[next])
            {
                dist[next] = dist[now] + 1;
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    bfs(1);

    for(int i=1;i<=n;i++)
    {
        if(dist[i]>= maxi)
        {
            maxi = dist[i];
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(dist[i] == maxi)
        {
            max_list.push_back(i);
        }
    }

    cout<<max_list[0]<<' '<<maxi<<' '<<max_list.size()<<'\n';
    return 0;
}