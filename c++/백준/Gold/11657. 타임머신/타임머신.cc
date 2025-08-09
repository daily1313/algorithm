#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int INF = 2100000000;
const int MAX = 501;
int n, m;
long long dist[MAX];
vector<pair<int, int>> graph[MAX];
bool cycle;
void bellmanFord(int start)
{
    fill(dist, dist + n + 1, INF);
    dist[start] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (auto p : graph[j])
            {
                int next = p.first;
                int cost = p.second;
                if (dist[j] != INF && dist[next] > dist[j] + cost)
                {
                    dist[next] = dist[j] + cost;
                    if (i == n) cycle = true; // 음수 사이클 존재
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    bellmanFord(1);
    if (cycle)
        cout << -1;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (dist[i] == INF)
                cout << -1 << '\n';
            else
                cout << dist[i] << '\n';
        }
    }

    return 0;
}