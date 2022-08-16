#include <iostream>
#include <queue>
#define max 101
using namespace std;
int a,b;
int board[max][max];
int x,y,n,m;
int visited[max] = {0};
int cnt[max] = {0};
void bfs(int node)
{
	
	queue<int>q;
	q.push(node);
	while(!q.empty()){
		node = q.front();
		q.pop();
		for(int i=1;i<=n;i++)
		{
			
			if(board[node][i] && !visited[i])
			{
				q.push(i);
				visited[i] = true;
				cnt[i] = cnt[node]+1;
			}
		}
	}
}
int main()
{
	cin>>n;
	cin>>x>>y;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		board[a][b] = board[b][a] = 1;		
	}
	bfs(x);
	
	if(!cnt[y]){
	cout<<-1;
	return 0;
	}
	cout<<cnt[y];
}
