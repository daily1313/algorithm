#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b)
{
	if(a.second<b.second) return true;
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	vector<pair<int,int>>v;
	int n,t;
	cin>>t;
	
	while(t--)
	{
		int cnt=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back({a,b});
		}
		sort(v.begin(),v.end());
		int rank = v[0].second;
		for(int i=1;i<n;i++){
			if(rank>v[i].second){
				rank = min(rank,v[i].second);
				cnt++;
			}
		}
		v.clear();
		cout<<cnt<<'\n';
	}
	

}

