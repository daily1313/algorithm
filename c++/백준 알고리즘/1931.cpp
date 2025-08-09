#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
{
	if(a.second==b.second) return a.first<b.first;
	
	return a.second<b.second;
}
int main()
{
	int n,end,begin;
	vector<pair<int,int>> schedule;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>begin>>end;
		schedule.push_back(make_pair(begin,end));
	}
	sort(schedule.begin(),schedule.end(),compare);
	int occupy = -1;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(occupy<=schedule[i].first){
			cnt++;
			occupy = schedule[i].second;
		}
	}
	cout<<cnt;
} 
