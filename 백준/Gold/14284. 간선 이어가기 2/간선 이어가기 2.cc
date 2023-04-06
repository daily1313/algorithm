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
        int dist = pq.top().first; // 현재 노드까지의 거리
        int now = pq.top().second; // 현재 노드 번호
        pq.pop(); // priority_queue에서 꺼낸 노드 제거
        if(d[now] < dist) continue; // 이미 처리된 노드인 경우는 스킵

        for(int i=0;i<graph[now].size();i++)
        {
            int cost = dist + graph[now][i].second; // 현재까지의 비용 + 현재 노드 ~ 다음 노드 간의 가중치(weight)
            int next = graph[now][i].first; // 다음 노드 번호
            int next_cost = d[next]; // 이전까지의 최단 거리
            if(cost < d[next]) { // 다음 노드까지의 거리가 더 짧다면 최단 거리를 업데이트하고 priority_queue에 삽입
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
