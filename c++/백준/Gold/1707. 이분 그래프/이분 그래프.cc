#include <iostream>
#include <vector>
#include <cstring>

#define INF 987654321
#define RED 1
#define BLUE 2
#define MAX 20001

int V, E, K;

using namespace std;

vector<int> graph[MAX];
int visited[MAX] = {0};

void input()
{
    cin >> V >> E;
}

void initializeGraph() 
{
    for (auto &v : graph) 
    {
        v.clear();
    }

    memset(visited, 0, sizeof(visited));
}

void dfs(int now)
{
    if (visited[now] == 0)
    {
        visited[now] = RED;
    }

    for (int i = 0; i < graph[now].size(); i++)
    {
        int next = graph[now][i];

        if (visited[next] == 0)
        {
            visited[now] == RED ? (visited[next] = BLUE) : (visited[next] = RED);
            dfs(next);
        }
    }
}

bool isBipartite()
{
    for (int now = 1; now <= V; now++)
    {
        for (int i = 0; i < graph[now].size(); i++)
        {
            int next = graph[now][i];
            if (visited[now] == visited[next])
                return false;
        }
    }
    return true;
}

void getResult()
{
    cin >> K;
    while (K--)
    {
        input();

        initializeGraph();

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].emplace_back(v);
            graph[v].emplace_back(u);
        }

        for (int i = 1; i <= V; i++)
        {
            if (visited[i] == 0)
            {
                dfs(i);
            }
        }

        if (isBipartite())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

void optimizeInputAndOutput()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    optimizeInputAndOutput();
    getResult();
    return 0;
}
