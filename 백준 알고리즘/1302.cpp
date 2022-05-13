#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;
map<string,int>m;
bool compare(const pair<string,int> &a,const pair<string,int> &b)
{
	if(a.second == b.second)
	{
		return a.first<b.first;
	}
	return a.second>b.second;
}
int main()
{
	int n;
	cin>>n;
	string a;
	for(int i=0;i<n;i++){
		cin>>a;
		m[a]+=1;
	}
	vector<pair<string, int>> v(m.begin(),m.end());
	sort(v.begin(),v.end(),compare);
	cout<<v[0].first;
}
