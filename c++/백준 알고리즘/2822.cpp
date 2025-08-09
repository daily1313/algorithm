#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int,int>> v(8);
	for(int i=0;i<8;i++){
		cin>>v[i].first;
		v[i].second = i+1;
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	int sum=0;
	int idx[5];
	for(int i=0;i<5;i++){
		sum+=v[i].first;
		idx[i]=v[i].second;
	}
	sort(idx,idx+5);
	cout<<sum<<'\n';
	for(int i=0;i<5;i++)
	{
		cout<<idx[i]<<' ';
	}
	
}
