#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n,m;
int board[501][501];
bool visit[501][501] = {false};
vector<int>v;
int wid;
int mov[4][2] ={{-1,0},{1,0},{0,1},{0,-1}};
void dfs(int x,int y)
{
	wid++;
	visit[x][y] = true;
	for(int i=0;i<4;i++)
	{
		int a = x + mov[i][0];
		int b = y + mov[i][1];
		if(a>=0 && b>=0 && a<n && b<m && !visit[a][b] && board[a][b])
		dfs(a,b);
	}
}
void bfs()
{
	bool visited[501][501] = {false};
	queue<pair<int,int>>q;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(board[i][j] && !visited[i][j])
			{
				q.push({i,j});
				int cnt=1;
				visited[i][j] = true;
				while(!q.empty())
				{
					pair<int,int> cur = q.front();
					q.pop();
					for(int k=0;k<4;k++)
					{
					int sr = cur.first + mov[k][0];
					int sc = cur.second + mov[k][1];
		
					if(sr>=0 && sc>=0 && sr<n && sc<m && !visited[sr][sc] && board[sr][sc])
					{
						visited[sr][sc]=true;
						q.push({sr,sc});
						cnt++;
					}
			
				}
				
				}
				v.push_back(cnt);
			}
		
	}
}
}

int main()
{
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			cin>>board[i][j];
			
		}
	}
	int num=0;
	int result=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!visit[i][j] && board[i][j])
			{
				num++;
				wid = 0;
				dfs(i,j);
				if(wid>result){
					result = wid;
				}	
			}
		}
	}
	cout<<num<<'\n';
	cout<<result<<'\n';
//	bfs();
//	cout<<v.size()<<'\n';
//	int max = *max_element(v.begin(),v.end());
//	cout<<max<<'\n';
	
}

