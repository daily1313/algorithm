#include <iostream>
using namespace std;
int n, Board[100][100];
void fill(int r,int c)
{
	if(r<0 || r>n-1 || c<0 || c> n-1) return; //경계면을 벗어나면 return 
	if(Board[r][c]) return; //벽이 있으면 return  
	Board[r][c] = 1;  
	fill(r-1,c);//위 
	fill(r+1,c);//아래 
	fill(r,c-1);//왼쪽 
	fill(r,c+1);//오른쪽 
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

