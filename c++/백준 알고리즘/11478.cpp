#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	set<string>s;
	vector<string>v;
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		string ans="";
		for(int j=i;j<str.size();j++){
			ans += str[j];
			v.push_back(ans);
		}
		v.push_back(ans);
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	
	cout<<v.size();
}
