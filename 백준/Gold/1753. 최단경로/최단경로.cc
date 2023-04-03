#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <climits>
#define INF INT_MAX

using namespace std;
vector<pair<int, int>>graph[20001];
int V, E;
int K;
int d[20001];
bool visited[20001];

void dijkstra(int start) {

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.push({0, start});
    d[start] = 0;
    while(!pq.empty())
    {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        if (d[now] < dist || visited[now]) {
            continue;
        }
        visited[now] = true;
        for(int i=0;i<graph[now].size();i++)
        {
            int next = graph[now][i].first;
            int cost = dist + graph[now][i].second;
            if(cost < d[next]) {
                d[next] = cost;
                pq.push({cost, next});
            }
        }
    }


}
int main()
{
    
    cin>>V>>E>>K;
    for(int i=0;i<E;i++)
    {
        int U,V,W;
        cin>>U>>V>>W;
        graph[U].push_back({V, W});
    }
    for(int i=1;i<=V;i++)
    {
        d[i] = INF;
    }
    
    dijkstra(K);
    for(int i=1;i<=V;i++)
    {
        if(d[i]==INF) cout<<"INF"<<'\n';
        else cout<<d[i]<<'\n';
    }
    return 0;
}