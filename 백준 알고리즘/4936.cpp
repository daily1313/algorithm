#include <iostream>
#include <cstring>
#include <queue>
#define max 51
using namespace std;
int w,h,n,m;
int board[max][max];
bool visited[max][max] = {0};

int dir[8][2] = {{-1,0},{1,0},{0,-1},{0,1},{1,1},{-1,-1},{1,-1},{-1,1}}; //상하좌우 대각선 이동 
void dfs(int x,int y)
{
	for(int i=0;i<8;i++)
	{
		int sr = x + dir[i][0];
		int sc = y + dir[i][1];
		if(sr<0 || sc<0 || sr>h-1 || sc>w-1) continue;
		if(visited[sr][sc]) continue;
		if(!visited[sr][sc] && board[sr][sc]){
			visited[sr][sc] = true;
			dfs(sr,sc);
		}
		
	}
}
int main()
{
	while(cin>>w>>h)
	{
		int cnt = 0;
		if(w==0 && h==0) break;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>board[i][j];
			}
		}
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(!visited[i][j] && board[i][j])
				{
					visited[i][j] = true;
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<'\n';
		memset(visited,0,sizeof(visited));
		memset(board,0,sizeof(board));
	}
}
