#include <iostream>
using namespace std;
int n, Board[100][100];
void fill(int r,int c)
{
	if(r<0 || r>n-1 || c<0 || c> n-1) return; //������ ����� return 
	if(Board[r][c]) return; //���� ������ return  
	Board[r][c] = 1;  
	fill(r-1,c);//�� 
	fill(r+1,c);//�Ʒ� 
	fill(r,c-1);//���� 
	fill(r,c+1);//������ 
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>Board[i][j];
		}
	}
	int sr,sc;
	cin>>sr>>sc;
	fill(sr,sc);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<Board[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}

