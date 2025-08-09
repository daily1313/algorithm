#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
#define INF 2e9

using namespace std;

// 노드의 개수(N), 간선의 개수(M), 시작 노드 번호(Start)
// 노드의 개수는 최대 100,000개로 가정
int N, M, Start, End;

vector<pair<int, int>> graph[100001];
// 각 노드에 연결되어 있는 노드에 대한 정보를 담는 배열
bool visited[100001];
// 최단 거리 테이블 만들기
int d[100001];
// 방문하지 않은 노드 중에서, 가장 최단 거리가 짧은 노드의 번호를 반환
int getResult() 
{
    int min_value = INF;
    int now = 0;
    for(int i=1;i<=N;i++)
    {
        if(d[i]<min_value && !visited[i]) 
        {
            min_value = d[i];
            now = i;
        }
    }
    return now;
}
void dijkstra(int start)
{
    // d[start] = 0;
    // //시작 노드 초기화
    // visited[start] = true;
    // for(int j=0;j<graph[start].size();j++)
    // {
    //     d[graph[start][j].first] = graph[start][j].second;
    // }
    // // 시작 노드를 제외한 전체 N - 1개의 노드에 대해 반복
    // for(int i=0;i<N-1;i++)
    // {
    //     int now = getResult();
    //     visited[now] = true;
    //     for(int j=0;j<graph[now].size();j++)
    //     {
    //         int cost = d[now] + graph[now][j].second;
    //         //현재 노드를 거쳐서 다른 노드로 이동하는 거리가 더 짧은 경우
    //         if(cost<d[graph[now][j].first]) 
    //         {
    //             d[graph[now][j].first] = cost;
    //         }
    //     }
    // }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.push({0, Start});
    while (!pq.empty()) {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        if (d[now] < dist) {
            continue;
        }

        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;

            if (cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push({ cost,graph[now][i].first});
            }
        }
    }
}
int main()
{
    cin>>N>>M;

    //모든 간선 정보 입력 받기
    for(int i=0;i<M;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
    }

    cin>>Start>>End;
    //최단 거리 테이블을 모두 무한으로 초기화
    fill(d,d + 100001,INF);
    
    //다익스트라 알고리즘 수행
    dijkstra(Start);

    cout<<d[End]<<'\n';
    

}