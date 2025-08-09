#include <iostream>
#include <cstring>
using namespace std;
#define max 10
int n, e;
int graph[max][max];
bool visited[max];

void dfs(int node)
{
	visited[node] = true;
	cout<<node<<' ';
	//�湮 ��� ��� 
	for(int next=0;next<n; next++)
	{
		//������ �ְ�, �湮���� Ȯ��(�湮���� �ʾ��� ��, Ž������) 
		if(!visited[next] && graph[node][next]){
			dfs(next);
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
	dfs(0);
	return 0;
}

