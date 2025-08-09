#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <algorithm>
#define INF 2e9
using namespace std;
int n, m;
vector<pair<int, int>> graph[1010];
vector<int> v;
long long d[1010];
int route[1010];
int start;
int e;
void dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    d[start] = 0;
    while (!pq.empty())
    {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        if (d[now] < dist) continue;
        for (int i = 0; i < graph[now].size(); i++)
        {
            int cost = dist + graph[now][i].second;
            int next = graph[now][i].first;
            if (d[next] > cost)
            {
                d[next] = cost;
                route[next] = now;
                pq.push({cost, next});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    cin >> start >> e;
    dijkstra(start);
    cout << d[e] << '\n';

    int temp = e;

    while (temp)
    {
        v.push_back(temp);
        temp = route[temp];
    }

    cout << v.size() << '\n';

    for (int i= v.size()-1;i>=0;i--)
    {
        cout << v[i] << ' ';
    }
    return 0;
}