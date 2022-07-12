#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	vector<char>v1;
	vector<char>v2;
	
	for(int i=0;i<a.size();i++)
	{
		v1.push_back(a[i]);
	}
	for(int i=0;i<b.size();i++)
	{
		v2.push_back(b[i]);
	}
    string ans = (v1.size()>=v2.size())?"go":"no";
    cout<<ans<<'\n';
}
