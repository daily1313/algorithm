#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

vector<pair<int,int>> house, chicken ,pick;
int n,m,t;
int ret = 100000000;
void dfs(int pos)
{
	if(pick.size()==m){
		int candi = 0;
		for(int i=0;i<house.size();i++){
			int min_dist = 1000000;
			for(int j=0;j<pick.size();j++){
				min_dist = min(min_dist,abs(house[i].second - pick[j].second) + abs(house[i].first - pick[j].first));
			}
			candi += min_dist;
		}
		if(ret>candi){
			ret = candi;
		}
		return;
	}
	
	for(int i=pos;i<chicken.size();i++)
	{
		pick.push_back(make_pair(chicken[i].first,chicken[i].second));
		dfs(i+1);
		pick.pop_back();
	}
}
int main()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>t;
			if(t==1){
				house.push_back(make_pair(i,j));
			}
			if(t==2){
				chicken.push_back(make_pair(i,j));
			}
		}
	}
	
	dfs(0);
	
	cout<<ret<<'\n';
}
