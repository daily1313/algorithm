#include <iostream>
#include <queue>
#include <algorithm>
#define max 1001
using namespace std;
int n,m;
int tomato[max][max];
queue<pair<int,int>>q;
bool visited[max][max];
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
void bfs()
{
	visited[max][max] = {false};
	while(!q.empty()){
		pair<int,int> cur = q.front();
		q.pop();
		visited[cur.first][cur.second] = true;
		for(int i=0;i<4;i++)
		{
			int sr = cur.first + mov[i][0];
			int sc = cur.second + mov[i][1];
			if(sr>=0 && sc>=0 && sr<n && sc<m && !visited[sr][sc] && tomato[sr][sc]==0)
			{
				visited[sr][sc] = true;
				q.push({sr,sc});
				tomato[sr][sc] = tomato[cur.first][cur.second] +1;
			}
				
	}
}
}

int main()
{
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cin>>tomato[i][j];
			if(tomato[i][j]==1){
				q.push({i,j});
			}
		}	
	}
	bfs();
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			if(tomato[i][j]==0 && !visited[i][j]){
				cout<<-1<<'\n';
				return 0;
			}
			if(ans<tomato[i][j]){
				ans = tomato[i][j];
			}
		}	
	}		
	cout<<ans-1<<'\n';
}
