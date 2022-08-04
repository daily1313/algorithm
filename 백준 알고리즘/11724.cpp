#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <string>
#define max 1001

int board[max][max];
bool visited[max] = {0};
int cnt=0;
int n,m;


using namespace std;
//void dfs(int node)
//{
//	visited[node] = true;
//	for(int i=1;i<=n;i++)
//		if(!visited[i] && board[node][i]){
//			dfs(i);
//		}
//}
void bfs(int node)
{
	queue<int>q;
	visited[node] = true;
	q.push(node);
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();
		for(int i=1;i<=n;i++)
		{
			if(!visited[i] && board[cur][i]==1)
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}
int main()
{
	memset(board,0,sizeof(board));
	int u,v;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		board[u][v] = board[v][u] = 1;
	}

	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cnt++;
			//dfs(i);
			bfs(i);
		}
	}
	cout<<cnt;
	
}
