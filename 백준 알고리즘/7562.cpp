#include <iostream>
#include <cstring>
#include <queue>
#define max 301
using namespace std;
queue<pair<int,int>>q;
int board[max][max];
bool visited[max][max];
int mov [8][2] = {{2,1},{1,2},{-2,1},{-1,2},{-2,-1},{-1,-2},{1,-2},{2,-1}}; // 말의 이동 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(board,0,sizeof(board));
		memset(visited,0,sizeof(visited));
		int l;
		cin>>l;
		int startx,starty;
		cin>>startx>>starty;
		q.push({startx,starty});
		visited[startx][starty] = true;
		int endx,endy;
		cin>>endx>>endy;
		while(!q.empty()){
			pair<int,int> xy = q.front();
			q.pop();
			if(xy.first == endx && xy.second == endy) {
				cout<<board[xy.first][xy.second]<<'\n';
				while(!q.empty()){
					q.pop();
				}
				break;
			}
			for(int i=0;i<8;i++){
				int sr = xy.first + mov[i][0];
				int sc = xy.second + mov[i][1];
				if(sr<0 || sc<0 || sr>l || sc>l ) continue;
				if(visited[sr][sc] ) continue;
				if(!visited[sr][sc])
				{
					q.push({sr,sc});
					visited[sr][sc] = true;
					board[sr][sc] = board[xy.first][xy.second]+1;
				}
			}
		
		}
		
		
		
		
	}
}
