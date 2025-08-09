#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	vector<int>cost;
	for(int i=1;i<v.size();i++){
		cost.push_back(v[i]-v[i-1]);
	}
	sort(cost.begin(),cost.end());
	int sum = 0;
	int cnt=0;
	for(int i=0;i<n-k;i++)
	{
		sum += cost[i];
		
	}
	cout<<sum<<'\n';
	
	
}
