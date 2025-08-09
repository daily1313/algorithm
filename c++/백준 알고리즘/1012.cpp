#include <iostream>
#include <cstring>
#include <vector>
#define max 51
using namespace std;
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int board[max][max];
bool visited[max][max] = {0};
int n,m,x,y;
int cnt=0;
void dfs(int a,int b)
{
	visited[a][b] = true;
	for(int i=0;i<4;i++){
		int sr = a + mov[i][0];
		int sc = b + mov[i][1];
		if(sr<0 || sc<0 || sr>m-1 || sc>n-1) continue;
		if(visited[sr][sc]) continue;
		if(!visited[sr][sc] && board[sr][sc]){
			visited[sr][sc] = true;
			dfs(sr,sc);
		} 
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cnt = 0;
		int k;
		cin>>m>>n>>k;
		for(int i=0;i<k;i++)
		{
			cin>>x>>y;
			board[x][y]=1;
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++){
				if(!visited[i][j] && board[i][j])
				{
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<'\n';
		memset(board,0,sizeof(board));
		memset(visited,0,sizeof(visited));
		
	}
}

