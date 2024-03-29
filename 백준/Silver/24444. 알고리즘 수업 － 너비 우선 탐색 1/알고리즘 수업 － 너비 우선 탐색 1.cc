#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M, R;
vector<int>graph[100001];
bool visited[100001];
int res[100001];
int order = 0;


void bfs(int start)
{
    queue<int>q;
    q.push(start);
    res[start] = ++order;
    visited[start] = true;

    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        for(int i=0;i<graph[now].size();i++)
        {
            int next = graph[now][i];
            if(visited[next]) continue;
            q.push(next);
            res[next] = ++order;
            visited[next] = true;
        }
    }
}

int main()
{
    cin>>N>>M>>R;

    memset(visited, false, sizeof(visited));
    for(int i=1;i<=N;i++)
    {
        res[i] = -1;
    }

    for(int i=0;i<M;i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0;i<=N;i++) 
    {
        sort(graph[i].begin(), graph[i].end());
    }

    bfs(R);

    for(int i=1;i<=N;i++)
    {
        if(res[i]==-1) cout<<0<<'\n';
        else cout<<res[i]<<'\n';
    }
    return 0;
}