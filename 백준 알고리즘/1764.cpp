#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	string str;
	map<string,int>mm;
	vector<string>v;
	vector<string>::iterator iter;
	for(int i=0;i<n+m;i++)
	{
		string str;
		cin>>str;
		mm[str]++;
		if(mm[str]>1) v.push_back(str);
	}
	
	sort(v.begin(),v.end());
	cout<<v.size()<<'\n';
	for(auto iter = v.begin();iter!=v.end();iter++)
	{
		cout<<(*iter)<<'\n';
	}
}
