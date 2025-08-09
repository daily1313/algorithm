#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
vector<tuple<string,int,int,int>>v;
bool cmp(tuple<string,int,int,int>&v1,tuple<string,int,int,int>&v2)
{
	if(get<3>(v1) == get<3>(v2) && get<2>(v1) == get<2>(v2) && get<1>(v1) == get<1>(v2)){
		return get<0>(v1)<get<0>(v2);
	}
	else if(get<2>(v1) == get<2>(v2) && get<1>(v1) == get<1>(v2))
	{
		return get<3>(v1)>get<3>(v2);
	}
	else if(get<1>(v1) == get<1>(v2))
	{
		return get<2>(v1) < get<2>(v2);
	}
	else return get<1>(v1)>get<1>(v2);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string a;
		int n1,n2,n3;
		cin>>a>>n1>>n2>>n3;
		v.push_back(make_tuple(a,n1,n2,n3));
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++)
	{
		cout<<get<0>(v[i])<<'\n';
	}

}
