#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int>graph[100001];
int visited[100001];
int n, m, r;
int first = 0;
int res[100001];

void bfs(int start)
{

    queue<int>q;
    q.push(start);
    visited[start] = 1;
    res[start] = ++first;


    while(!q.empty())
    {
        int now = q.front();
        q.pop();

        
        for(int next = 0; next < graph[now].size(); next++)
        {
            int nxt = graph[now][next];
            if(visited[nxt] == 0)
            {
                res[nxt] = ++first;
                visited[nxt] = 1;
                q.push(nxt);
            }
        }
    }



}
int main()
{
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
        sort(graph[i].begin(),graph[i].end(),greater<int>());
    }

    bfs(r);

    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<'\n';
    }

    return 0;
}