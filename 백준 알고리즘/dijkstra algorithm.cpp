#include <vector>
#include <iostream>
#include <queue>
 
#define MAX 100        // �ִ� ������ ���� 
#define INF 99999999
 
using namespace std;
  
vector<int> dijkstra(int start, int V, vector<pair<int,int> > adj[]) {
    vector<int> dist(V, INF);    // ���� INF�� �ʱ�ȭ 
    priority_queue<pair<int, int> > pq;
    
    dist[start] = 0;
    pq.push(make_pair(0, start));    // ���� ���� �湮 
 
    while (!pq.empty()) {
        int cost = -pq.top().first;    // �湮�� ������ dist �� 
        int cur = pq.top().second;    // ���� �湮�� ���� 
        pq.pop();
 
        for (int i = 0; i < adj[cur].size(); i++) {    // ���� �湮�� ������ �ֺ� ���� ��� ���� 
            int next = adj[cur][i].first;    // ������ ���� ���� 
            int nCost = cost + adj[cur][i].second;    // ���� �湮�� ������ ���ļ� ���� ������ ������ ��� 
            if (nCost < dist[next] ) {     // ���� ��뺸�� ���� �湮�� ������ ��ģ ����� �� �δٸ� 
                dist[next] = nCost;    // ���� 
                pq.push(make_pair(-nCost, next));    // pq�� ���� 
            }
        }
    }
    
    return dist;
}
int main()
{
    int V,E;
    vector<pair<int, int> > adj[MAX];
    cout << "������ ���� �Է� : ";
    cin >> V;
    cout << "������ ���� �Է� : ";
    cin >> E;
 
    for (int i = 0; i < E; i++) {
        int from, to, cost;
        cout << "�׷��� �Է� [���� ���� ����ġ]: ";
        cin >> from >> to >> cost;
        adj[from].push_back(make_pair(to, cost));    // ����� �׷��� 
        adj[to].push_back(make_pair(from, cost));
    }
 
    printf("\n===���ͽ�Ʈ�� ���===\n");
    vector<int> dist = dijkstra(0, V, adj);
    for (int i = 0; i < V; i++) {
        printf("0�� �������� %d�� �������� �ִܰŸ� : %d\n", i, dist[i]);
    }
    return 0;
}


