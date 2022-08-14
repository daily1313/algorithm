#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int n,m;

int ans=0;
int board[51][51];
int mov[8][2] = {{-1,0},{1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
int bfs(int a,int b)
{
	bool visited[51][51]={false};
	queue<pair<pair<int,int>,int>>q;
	visited[a][b] = true;
	q.push({make_pair(a,b),0});

	while(!q.empty())
	{
		pair<pair<int,int>,int> cur = q.front();
		q.pop();
		int cnt = cur.second;
		if(board[cur.first.first][cur.first.second]) {
			return cnt;
		}
		for(int i=0;i<8;i++)
		{
			int sr = cur.first.first + mov[i][0];
			int sc = cur.first.second + mov[i][1];
			
			if(sr>=0 && sc>=0 && sr<n && sc<m && !visited[sr][sc])
			{
				
				visited[sr][sc]=true;
				q.push({make_pair(sr,sc),cnt+1});
			}
		}
		
	}
}
int main()
{
	memset(board,0,sizeof(board));
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>board[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!board[i][j]){
				ans = max(ans,bfs(i,j));
			}
		}
	}
	cout<<ans<<'\n';
}
