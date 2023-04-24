#include <iostream>
#include <vector>
#include <queue>
#define INF 1e15
 
using namespace std;
 
#define max 2501
typedef long long ll;
typedef vector<pair<int, int>> pii;
int n, m;
int prices[max];
ll dist[max][max]; // 1에서 j까지 기름값 k로 가는 비용  
vector<pii> graph;
 
ll dijkstra(){
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=max; j++){
            dist[i][j] = INF;
        }
    }
    
    priority_queue<pair<ll, pair<int, int> > > pq; // cost, node, gas price
    pq.push({0, {1, prices[1]}});
    
    while(!pq.empty())
    {
        int node = pq.top().second.first;
        ll cost = -pq.top().first;
        int price = pq.top().second.second;
        pq.pop();
        
        if(dist[node][price] < cost) continue;
        if(node == n) return cost;  
        
        for(int i=0; i<graph[node].size(); i++){
            int next = graph[node][i].first;
            ll next_cost = cost + graph[node][i].second * price;
            int next_price = min(price, prices[next]);
            
            if(dist[next][price] > next_cost){
                dist[next][price] = next_cost;
                pq.push({-next_cost, {next, next_price}});
            }
        }
    }
}
 
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    graph.resize(n+1); 
    
    for(int i=1; i<=n; i++){
        cin >> prices[i];
    }
    
    int a, b, c;
    for(int i=0; i<m; i++){
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    
    cout << dijkstra();
    return 0;
}
