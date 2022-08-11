#include <iostream>

int cnt = 0;
int n;
int board[15];
using namespace std;

bool check(int cur)
{
	
	for(int i=0;i<cur;i++)
	{
		if(board[cur]==board[i] || cur - i == abs(board[cur] - board[i])){
			return false;
		}
	}
	return true;
}
void nqueen(int cur)
{
	if(cur == n){
		cnt++;
		return;
	}
	for(int i=0;i<n;i++)
	{
		board[cur] = i; // cur = За i = ї­ 
		if(check(cur)){
			nqueen(cur+1);
			board[cur] = 0;
		}
	}
	
}
int main()
{
	cin>>n;
	nqueen(0);
	cout<<cnt;
}
