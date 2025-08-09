#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
#include <utility>
using namespace std;
bool cmp(tuple<string,int,int,int>&v1,tuple<string,int,int,int>&v2)
{
	if(get<3>(v1)==get<3>(v2))
	{
		if(get<2>(v1)==get<2>(v2)) return get<1>(v1)>get<1>(v2);
		else return get<2>(v1)>get<2>(v2);
	}
	else return get<3>(v1)>get<3>(v2);
}
int main()
{
	int n;
	cin>>n;
	vector<tuple<string,int,int,int>>v;
	int year,day,month;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str>>year>>day>>month;
		v.push_back(make_tuple(str,year,day,month));
	}
	sort(v.begin(),v.end(),cmp);
	cout<<get<0>(v[0])<<'\n';
	cout<<get<0>(v[n-1])<<'\n';
	
	
}
