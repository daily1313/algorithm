#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
bool check[26][26];
int Board[26][26];
vector<int>rooms;
int cnt=0;
int n;
string s;
void dfs(int x,int y)
{
	for(int i=0;i<4;i++)
	{
		int sr = x + mov[i][0];
		int sc = y + mov[i][1];
		if(sr >=0 && sc >=0 && sr <= n && sc <= n){
		if(!check[sr][sc] && Board[sr][sc]){
			check[sr][sc] = true;
			cnt++;
			dfs(sr,sc);		
		}
	}
	
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<n;j++)
		{
			Board[i][j]=s[j]-'0';
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(!check[i][j] && Board[i][j]){
				check[i][j] = true;
				cnt++;
				dfs(i,j);
				rooms.push_back(cnt);
				cnt=0;
				
			}
		}
	}
	cout<<rooms.size()<<'\n';
	sort(rooms.begin(),rooms.end());
	for(int i=0;i<rooms.size();i++){
		cout<<rooms[i]<<'\n';
	}
}