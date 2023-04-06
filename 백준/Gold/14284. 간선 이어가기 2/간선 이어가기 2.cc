#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#define INF 2100000000;
using namespace std;
int n, m, s, t;

vector<pair<int, int>> graph[5001];
int d[5001];
void dijkstra(int start) {

    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.push({0, start});

    while(!pq.empty())
    {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++)
        {
            int cost = dist + graph[now][i].second;
            int next = graph[now][i].first;
            int next_cost = d[next];
            if(cost < d[next]) {
                d[next] = cost;
                pq.push({cost, next});
            }
        }
    }
} 
int main()
{
    
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        d[i] = INF;
    }
    
    for(int i=0;i<m;i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    cin>>s>>t;
    dijkstra(s);
    cout<<d[t]<<'\n';
    return 0;
}
