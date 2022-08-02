#include <iostream>
#include <queue>
#define max 10
using namespace std;
int d[4][2] = {{-1,0},{1,0},{0,-1},{0,1}}; // �����¿� �̵�
int Board[max][max];
int n;
struct Point{
	int row, col, dist;
};

int bfs(int srcRow, int srcCol, int dstRow, int dstCol){
	bool visited[max][max] = {false}; // ���ȣ���� ���� �����Ƿ� ���ÿ����÷ο� ��� x, �ٷ� ���ú����� ����
	queue<Point>myqueue;
	visited[srcRow][srcCol] = true;
	myqueue.push({srcRow,srcCol,0}); // ���� ��ġ���� ���� ��ġ���� �̵��ϱ� ���� �Ÿ� 0
	while(!myqueue.empty()){
		Point curr = myqueue.front();
		myqueue.pop();
		if(curr.row == dstRow && curr.col == dstCol){
			return curr.dist;
		} // ������ġ == ������, �̵��Ÿ� ��ȯ 
		for(int i=0;i<4;i++)
		{
			int nr = curr.row + d[i][0], nc = curr.col + d[i][1]; //�����¿� �̵� 
			if(nr<0 || nr>n-1 || nc<0 || nr>n-1) continue; // �� ��ġ�� n*n ������ ������� check
			if(visited[nr][nc]) continue; // �湮 ���� check 
			if(Board[nr][nc] == 1) continue; //���� �ִ��� check
			visited[nr][nc] = true;
			myqueue.push({nr,nc,curr.dist+1}); // �Ÿ� ��ĭ �����ش�. 
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
	int srcRow,srcCol, dstRow, dstCol; //������ �������� ��ġ
	cin>>srcRow>>srcCol>>dstRow>>dstCol;
	cout<<bfs(srcRow,srcCol,dstRow,dstCol);
	
} 

