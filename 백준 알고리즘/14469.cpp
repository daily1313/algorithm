#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	vector<pair<int, int>> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	
	int sum = v[0].first + v[0].second;
	for(int i=1;i<v.size();i++)
	{
		if(sum<=v[i].first)
		{
			sum = v[i].first+v[i].second;
		}
		else{
			sum += v[i].second;
		}
	}
	cout<<sum<<'\n';

	
}
