#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string str;
	vector<string>v;
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		string ans = "";
		for(int j=i;j<str.size();j++)
		{
			ans += str[j];
		}
		v.push_back(ans);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<'\n';
	}
}

