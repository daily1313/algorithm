#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;
int v, from, to, dist, now_node;
int res = 0;
vector<pair<int, int>> graph[100001];
bool visited[100001];

void dfs(int from, int dist)
{
    visited[from] = true;
    
    if (dist > res)
    {
        res = dist;
        now_node = from;
    }
    for (int i = 0; i < graph[from].size(); i++)
    {
        int next_node = graph[from][i].first;
        int next_dist = graph[from][i].second + dist;
        if (!visited[next_node])
        {
            visited[next_node] = true;
            dfs(next_node, next_dist);
            visited[next_node] = false;
        }
    }
}

void findMaxDistanceNodeFromRoot()
{
    dfs(1, 0);
}

void initializeMaxDistanceAndVisitStatus()
{
    memset(visited, false, sizeof(visited));
    res = 0;
}

void input()
{
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        cin >> from;
        while (true)
        {
            cin >> to;
            if (to == -1)
                break;
            cin >> dist;
            graph[from].push_back({to, dist});
        }
    }
}

int getDiameterOfTree()
{
    dfs(now_node, 0);
    return res;
}

int main()
{
    input();
    findMaxDistanceNodeFromRoot();
    initializeMaxDistanceAndVisitStatus();
    cout << getDiameterOfTree() << '\n';
}