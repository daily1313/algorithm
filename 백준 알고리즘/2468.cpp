#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int h;
int board[101][101];
bool visited[101][101];
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
int maxh = 0;
void dfs(int x,int y,int num)
{
	visited[x][y] = true;
	for(int i=0;i<4;i++)
	{
		int r = x + mov[i][0];
		int c = y + mov[i][1];
		if(r<h && c<h && r>=0 && c>=0 && board[r][c]>num && !visited[r][c]){
			dfs(r,c,num);
		}
	}
	
}
int main()
{
	cin>>h;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<h;j++)
		{
			cin>>board[i][j];
			if(board[i][j]>maxh){
				maxh = board[i][j];
			}
		}
	}
	
		int result = 0;	
		for(int number = maxh;number>=0;number--)
		{
			memset(visited,0,sizeof(visited));
			int cnt=0;
				for(int i=0;i<h;i++)
					{
				for(int j=0;j<h;j++)
					{
					if(board[i][j]>number && !visited[i][j]){
					cnt++;
					dfs(i,j,number);	
					}
					if(cnt>result) result =cnt;
				}
			}	
		}
	
		cout<<result;

	
	
	
}
