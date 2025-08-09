#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <utility>
using namespace std;
bool com(pair<long long, long long> a, pair<long long, long long> b) {
	if(a.second==b.second){
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<long long>v;
	vector<pair<long long,long long>>p;
	while(n--)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	int end = *max_element(v.begin(),v.end());
	int result;
	for(int i = end; i>=1;i--)
	{
		long long sum = 0;
		for(int j=0;j<v.size();j++){
			
			sum += abs(i-v[j]);		
		}
		p.push_back(make_pair(i,sum));
	}
	sort(p.begin(),p.end(),com);
	cout<<p[0].first<<'\n';
	
}
