#include <iostream>
#include <cstring>
using namespace std;
#define max 101
int n, e;
int graph[max][max];
bool visited[max];
int cnt=0;
void dfs(int node)
{
	visited[node] = true;
	//방문 노드 출력 
	for(int next=1;next<=n; next++)
	{
		//간선이 있고, 방문여부 확인(방문하지 않았을 때, 탐색진행) 
		if(!visited[next] && graph[node][next]){
			dfs(next);
			cnt++;
		}
	}
}
int main()
{
	cin>>n>>e;
	memset(visited, 0, sizeof(visited));
	memset(graph, 0, sizeof(graph));
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u][v]=graph[v][u]=1;
	}
	dfs(1);
	cout<<cnt;
}