#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#define max 101

using namespace std;
queue<pair<int,int>>q;
int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int board[max][max];

int n,m;
string s;
void bfs(int x,int y){
	bool visited[max][max] = {false};
	visited[x][y]=true;
	q.push({x,y});
	int sr, sc;
	pair<int,int>now;
	while(!q.empty())
	{
		now = q.front();
		q.pop();
		for(int i=0;i<4;i++){
			sr = now.first + dir[i][0];
			sc = now.second + dir[i][1];
			if(sr>=0 && sr<=n-1 && sc >=0 && sc<=m-1 && board[sr][sc] && !visited[sr][sc]){
				q.push({sr,sc});
				visited[sr][sc]=true;
				board[sr][sc] = board[now.first][now.second]+1;
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<m;j++){
			board[i][j] = s[j]-'0';
		}
	}
	bfs(0,0);
	cout<<board[n-1][m-1]<<'\n';
}
