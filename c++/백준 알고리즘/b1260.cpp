#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define max 1001
using namespace std;
int n,m;
int v;
int board[max][max];
bool visited[max] = {false};
void dfs(int node)
{
		visited[node] = true;
		cout<<node<<' ';
		for(int next=1;next<=n;next++)
		{
		if(!visited[next] && board[node][next]){
			dfs(next);
		}
	}
}
void bfs(int node)
{
	visited[max] = {false};
	queue<int>q;
	visited[node] = true;
	q.push(node);
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout<<cur<<' ';
		for(int next=1;next<=n;next++)
		{
			if(!visited[next] && board[cur][next]){
				visited[next] = true;
				q.push(next);
			}
		}
	}
	
}
int main()
{
	
	cin>>n>>m>>v;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		board[a][b] = board[b][a] = 1;
	}
	dfs(v);
	cout<<'\n';
	memset(visited,0,sizeof(visited));
	bfs(v);
	
}
