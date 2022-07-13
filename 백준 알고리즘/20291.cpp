#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	map<string,int>m;
	while(n--)
	{
		cin>>str;
		string ans="";
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='.'){
				str.erase(str.begin(),str.begin()+i+1);
				m[str]++;
				continue;
			} 
		}
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<' '<<(*it).second<<'\n';
	}
}
