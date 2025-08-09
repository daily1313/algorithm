#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> G[10001];
priority_queue<pair<int, int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
int V, E;
int a,b,c;
long long ans;
bool visited[10001];
int main()
{
    
    cin>>V>>E;
    for(int i=0;i<E;i++)
    {
        cin>>a>>b>>c;
        G[a].push_back(make_pair(b,c));
        G[b].push_back(make_pair(a,c));
    }

    pq.push(make_pair(0,1));


    while(!pq.empty())
    {
        int w = pq.top().first;
        int node =pq.top().second;
        pq.pop();

        if(visited[node]) continue;
        visited[node] = true;

        ans += w;

        for (int i = 0; i < G[node].size(); i++) { //현재 정점에서 이동 할 수 있는 방문하지 않은 정점 푸쉬 
			
			pq.push(make_pair(G[node][i].second, G[node][i].first));
			
		}
    }
    cout<<ans<<'\n';
}
