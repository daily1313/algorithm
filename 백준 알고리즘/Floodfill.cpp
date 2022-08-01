#include <iostream>
#include <cstring>
#include <stack>
#define max 10
int D[4][2] = {{-1,0},{1,0},{0,-1},{0,1}}; // ������� ���� ������ �� �Ʒ��� �ǹ� 
using namespace std;
struct Point{
	int row,col; // ��,�� 
};

int n, Board[max][max];
void dfs(int r,int c,int color)
{
	bool visited[max][max] = {false};
	stack<Point>mystack;
	mystack.push({r,c}); //������ push 
	while(!mystack.empty()){
		Point curr = mystack.top();
		mystack.pop();
		if(visited[curr.row][curr.col]) continue;
		visited[curr.row][curr.col] =true;
		Board[curr.row][curr.col] =color;
		for(int i=0;i<4;i++){
			int nr = curr.row+D[i][0], nc = curr.col+D[i][1]; //�����¿� ����ǥ�� 
			if(nr<0 || nr>n-1 || nc<0 || nc>n-1) continue; //�Է¹��� n*n�� ������ �ʰ��ϴ��� �˻� 
			if(visited[nr][nc]) continue; //�湮�ߴٸ� skip 
			if(Board[nr][nc]) continue;//�̹� ����ǥ�ø� �ߴٸ� skip 
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
	cin>>sr>>sc>>color; // ������ sr,sc ����ǥ�� color 
	dfs(sr,sc,color);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<Board[i][j]<<' ';
		}
		cout<<'\n';
	}
	
}


