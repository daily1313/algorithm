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
	//�湮 ��� ��� 
	for(int next=1;next<=n; next++)
	{
		//������ �ְ�, �湮���� Ȯ��(�湮���� �ʾ��� ��, Ž������) 
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
	return 0;
}
