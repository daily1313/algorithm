#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
bool check[26][26];
int Board[26][26];
stack<pair<int,int>>rooms;
vector<int>v;
string s;
int n;
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
				int cnt=1;
				rooms.push({i,j});
				while(!rooms.empty()){
					pair<int,int> cur = rooms.top();
					rooms.pop();
					for(int i=0;i<4;i++)
					{
						int sr = cur.first + mov[i][0];
						int sc = cur.second + mov[i][1];
						if(sr < 0 || sc < 0 || sr > n || sc > n) continue;
						if(!Board[sr][sc] || check[sr][sc]) continue;
						check[sr][sc] = true;
						rooms.push({sr,sc}); cnt++;
					}
				}
				v.push_back(cnt);	
			}
			
		}
	}
	cout<<v.size()<<'\n';
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<'\n';
	}
}
