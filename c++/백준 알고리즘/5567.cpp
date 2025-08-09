#include <iostream>
using namespace std;
int board[501][501];
bool visited[501];
int cnt=0;
int n,m; // n => 정점의 최대 수 m=> 간선의 수 
void bfs(int node)
{
	for(int i=2;i<=n;i++)
	{
		if(board[1][i])
		{
			visited[i] = true;
			for(int j=2;j<=n;j++)
			{
				if(board[i][j]){
					visited[j] = true;
				}
			}
		}
	}
}
int main()
{
	
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b; 
		cin>>a>>b;
		board[a][b] = board[b][a] = 1;
	}

	bfs(1);
	for(int i=2;i<=n;i++)
	{
		if(visited[i]) cnt++;
	}
	cout<<cnt<<'\n';
}
