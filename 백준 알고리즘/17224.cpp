#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
bool com(pair<int,int> a,pair<int,int>b)
{
	return a.second<b.second;
}
int main()
{
	int N,L,K;
	
	cin>>N>>L>>K;
	int cnt=0;
	int a,b;
	vector<pair<int,int>>v;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),com);
	int sum=0;
	for(int i=0;i<N;i++)
	{
		if(cnt==K) break;
		if(L>=v[i].first && L>=v[i].second)
		{
			sum += 140;
			cnt++;
			v.pop_back();
		}
		else if(L>=v[i].first && L<v[i].second)
		{	
			sum += 100;
			v.pop_back();
			cnt++;
		}
		else
		{
			v.pop_back();
			cnt++;
		}
	}
	cout<<sum;
}
