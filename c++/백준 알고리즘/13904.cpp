#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string.h>
using namespace std;
vector<pair<int,int>>v;
bool check[1001];
int arr[1001];
bool cmp(const pair<int,int>&a,const pair<int,int>&b)
{
	if(a.second == b.second)
	{
		return a.first>b.first;
	}
	return a.second>b.second;
}
int main()
{
	int n;
	cin>>n;
	int day, score;
	memset(arr, 0, sizeof(arr));
	for(int i=0;i<n;i++)
	{
		cin>>day>>score;
		v.push_back({day,score});
	}
	sort(v.begin(),v.end(),cmp);
	int d_index = 0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int end = v[i].first;
		while(end>=1) 
		{
			if(arr[end]==0)
			{
				arr[end] = v[i].second;
				break;
			}
			else
			{
				--end;
			}
		}	
	}
	for(int i=1;i<=1000;i++)
	{
		sum += arr[i];
	}
	cout<<sum<<'\n';
}
