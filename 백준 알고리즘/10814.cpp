#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;
bool com(tuple<int,string,int>&v1,tuple<int,string,int>&v2)
{
	if(get<0>(v1)==get<0>(v2)){
		return get<2>(v1)<get<2>(v2);
	}
	return get<0>(v1)<get<0>(v2);
}
int main()
{
	int n;
	vector<tuple<int,string,int>>v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		string str;
		cin>>num>>str;
		v.push_back(make_tuple(num,str,i));
	}
	sort(v.begin(),v.end(),com);
	for(int i=0;i<v.size();i++)
	{
		cout<<get<0>(v[i])<<' '<<get<1>(v[i])<<'\n';
	}
}
