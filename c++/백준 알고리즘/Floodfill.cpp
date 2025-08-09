#include <iostream>
#include <cstring>
#include <stack>
#define max 10
int D[4][2] = {{-1,0},{1,0},{0,-1},{0,1}}; // 순서대로 왼쪽 오른쪽 위 아래를 의미 
using namespace std;
struct Point{
	int row,col; // 행,열 
};

int n, Board[max][max];
void dfs(int r,int c,int color)
{
	bool visited[max][max] = {false};
	stack<Point>mystack;
	mystack.push({r,c}); //기준점 push 
	while(!mystack.empty()){
		Point curr = mystack.top();
		mystack.pop();
		if(visited[curr.row][curr.col]) continue;
		visited[curr.row][curr.col] =true;
		Board[curr.row][curr.col] =color;
		for(int i=0;i<4;i++){
			int nr = curr.row+D[i][0], nc = curr.col+D[i][1]; //상하좌우 영역표시 
			if(nr<0 || nr>n-1 || nc<0 || nc>n-1) continue; //입력받은 n*n의 범위를 초과하는지 검사 
			if(visited[nr][nc]) continue; //방문했다면 skip 
			if(Board[nr][nc]) continue;//이미 영역표시를 했다면 skip 
			mystack.push({nr,nc}); 
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin>>Board[i][j];
		}
	}
	int sr,sc,color;
	cin>>sr>>sc>>color; // 기준점 sr,sc 영역표시 color 
	dfs(sr,sc,color);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<Board[i][j]<<' ';
		}
		cout<<'\n';
	}
	
}


