#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;
int map[8][8];
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};

int ret = 0;

void bfs(){
	bool visited[8][8] = {false};
	queue<pair<int,int>> q;
	int backup[8][8];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			backup[i][j] = map[i][j];
			if(backup[i][j]==2){
				q.push({i,j});
				visited[i][j] = true;
			}
		}
	}
	while(!q.empty()){
		pair<int,int> cur = q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int sr = cur.first + mov[i][0];
			int sc = cur.second + mov[i][1];
			
			if(sr<0 || sc<0 || sr>n-1 || sc >m-1) continue;
			if(!visited[sr][sc] && !backup[sr][sc])
			{
				visited[sr][sc] = true;
				backup[sr][sc] = 2;
				q.push({sr,sc});
			}
		}
	}
	int candi = 0;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			if(!backup[i][j]){
				++candi;
			}
		}
	}
	if(ret < candi){
		ret = candi;
	}
}
void dfs(int count,int x,int y)
{
	if(count == 3) {
		bfs();
		return;	
	}
	for(int i=x;i<n;i++){
		for(int j=y;j<m;j++){
			if(!map[i][j]){
				map[i][j] = 1;
				dfs(count+1,i,j);
				map[i][j] = 0;
			}
		}
		y=0;
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>map[i][j];
		}
	}
	dfs(0,0,0);
	
	cout<<ret<<'\n';
}
