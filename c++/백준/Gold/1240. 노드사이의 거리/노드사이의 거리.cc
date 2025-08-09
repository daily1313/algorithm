#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;
int d[1001];
vector<pair<int,int>>graph[1001];
int bfs(int s,int e)
{
    memset(d,-1,sizeof(d));
    queue<int>q;
    q.push(s);
    d[s] = 0;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        for(int next=0;next<graph[now].size();next++)
        {
            if(d[graph[now][next].first]!= -1) continue;
            d[graph[now][next].first] = d[now] + graph[now][next].second;
            q.push(graph[now][next].first);
        }
    }

    return d[e];
}
int main() 
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n-1;i++)
    {
        int from,to,dist;
        cin>>from>>to>>dist;
        graph[from].push_back({to,dist});
        graph[to].push_back({from,dist});
    }

    for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << bfs(a, b) << "\n";
	}

}
