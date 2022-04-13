#include <vector>
#include <iostream>
#include <queue>
 
#define MAX 100        // 최대 정점의 개수 
#define INF 99999999
 
using namespace std;
  
vector<int> dijkstra(int start, int V, vector<pair<int,int> > adj[]) {
    vector<int> dist(V, INF);    // 전부 INF로 초기화 
    priority_queue<pair<int, int> > pq;
    
    dist[start] = 0;
    pq.push(make_pair(0, start));    // 시작 정점 방문 
 
    while (!pq.empty()) {
        int cost = -pq.top().first;    // 방문한 정점의 dist 값 
        int cur = pq.top().second;    // 현재 방문한 정점 
        pq.pop();
 
        for (int i = 0; i < adj[cur].size(); i++) {    // 현재 방문한 정점의 주변 정점 모두 조사 
            int next = adj[cur][i].first;    // 조사할 다음 정점 
            int nCost = cost + adj[cur][i].second;    // 현재 방문한 정점을 거쳐서 다음 정점을 갈때의 비용 
            if (nCost < dist[next] ) {     // 기존 비용보다 현재 방문한 정점을 거친 비용이 더 싸다면 
                dist[next] = nCost;    // 갱신 
                pq.push(make_pair(-nCost, next));    // pq에 저장 
            }
        }
    }
    
    return dist;
}
int main()
{
    int V,E;
    vector<pair<int, int> > adj[MAX];
    cout << "정점의 개수 입력 : ";
    cin >> V;
    cout << "간선의 개수 입력 : ";
    cin >> E;
 
    for (int i = 0; i < E; i++) {
        int from, to, cost;
        cout << "그래프 입력 [정점 정점 가중치]: ";
        cin >> from >> to >> cost;
        adj[from].push_back(make_pair(to, cost));    // 양방향 그래프 
        adj[to].push_back(make_pair(from, cost));
    }
 
    printf("\n===다익스트라 결과===\n");
    vector<int> dist = dijkstra(0, V, adj);
    for (int i = 0; i < V; i++) {
        printf("0번 정점에서 %d번 정점까지 최단거리 : %d\n", i, dist[i]);
    }
    return 0;
}


