#include <iostream>
#include <queue>
#define max 10
using namespace std;
int d[4][2] = {{-1,0},{1,0},{0,-1},{0,1}}; // 상하좌우 이동
int Board[max][max];
int n;
struct Point{
	int row, col, dist;
};

int bfs(int srcRow, int srcCol, int dstRow, int dstCol){
	bool visited[max][max] = {false}; // 재귀호출을 하지 않으므로 스택오버플로우 고려 x, 바로 로컬변수로 선언
	queue<Point>myqueue;
	visited[srcRow][srcCol] = true;
	myqueue.push({srcRow,srcCol,0}); // 현재 위치에서 현재 위치까지 이동하기 위한 거리 0
	while(!myqueue.empty()){
		Point curr = myqueue.front();
		myqueue.pop();
		if(curr.row == dstRow && curr.col == dstCol){
			return curr.dist;
		} // 현재위치 == 도착점, 이동거리 반환 
		for(int i=0;i<4;i++)
		{
			int nr = curr.row + d[i][0], nc = curr.col + d[i][1]; //상하좌우 이동 
			if(nr<0 || nr>n-1 || nc<0 || nr>n-1) continue; // 현 위치가 n*n 범위를 벗어났는지 check
			if(visited[nr][nc]) continue; // 방문 여부 check 
			if(Board[nr][nc] == 1) continue; //벽이 있는지 check
			visited[nr][nc] = true;
			myqueue.push({nr,nc,curr.dist+1}); // 거리 한칸 더해준다. 
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
	int srcRow,srcCol, dstRow, dstCol; //시작점 도착점의 위치
	cin>>srcRow>>srcCol>>dstRow>>dstCol;
	cout<<bfs(srcRow,srcCol,dstRow,dstCol);
	
} 

