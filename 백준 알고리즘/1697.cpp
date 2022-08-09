#include <iostream>
#include <cstring>
using namespace std;
int n,k;
int cnt=0;
void dfs(int start,int number)
{
	if(start == k)
	{
		cout<<cnt<<'\n';
	}
	{
		dfs(start-1,cnt+1);
		dfs(start+1,cnt+1);
		dfs(start*2,cnt+1);
	}
}
int main()
{
	cin>>n>>k;
	dfs(n,0);
}
