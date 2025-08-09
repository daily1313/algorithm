#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int>v;
	vector<int>v2;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		v.push_back(num);
		v2.push_back(num);
	}
	sort(v2.begin(),v2.end());
	v2.erase(unique(v2.begin(),v2.end()),v2.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<lower_bound(v2.begin(),v2.end(),v[i])-v2.begin()<<' ';
	}
	

	
}
