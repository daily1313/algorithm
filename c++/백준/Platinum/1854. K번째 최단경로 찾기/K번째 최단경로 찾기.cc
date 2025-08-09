#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
// first factor standard (operate min-heap)
priority_queue<int>dist[1001];
vector<pair<int, int>> graph[1001];
int k, n, m;
int from, to, cost;

void dijkstra() 
{
    pq.push({0, 1});
    dist[1].push(0);

    while(!pq.empty())
    {
        int now_node = pq.top().second;
        int now_cost = pq.top().first;
        pq.pop();

        for(int i=0;i<graph[now_node].size(); i++)
        {
            int next_node = graph[now_node][i].first;
            int next_cost = graph[now_node][i].second + now_cost;

            if(dist[next_node].size() < k)
            {
                dist[next_node].push(next_cost);
                pq.push({next_cost, next_node});
            }
            else
            {
                if(dist[next_node].top() > next_cost) 
                {
                    dist[next_node].pop();
                    dist[next_node].push(next_cost);
                    pq.push({next_cost, next_node});
                }                
            }
        }
    }
}

void input()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>from>>to>>cost;
        graph[from].push_back({to, cost});
    }
}
void getResult() 
{
    for(int i=1;i<=n;i++)
    {
        if(dist[i].size() < k)
        {
            cout<<-1<<'\n';
        }
        else 
        {
            cout<<dist[i].top()<<'\n';
        }
    }
}

int main()
{
    input();
    dijkstra();
    getResult();
}