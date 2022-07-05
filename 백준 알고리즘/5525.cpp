#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
	int n,m;
	
	string ans="";
	cin>>n;
	int cnt=0;
	vector<char>v;
	for(int i=0;i<n;i++)
	{
		if(i==0) ans +="IOI";
		else ans += "OI";
	}
	
	cin>>m;
	for(int i=0;i<m;i++)
	{
		char c;
		cin>>c;
		v.push_back(c);
	}
	
	for(int i=0;i<m-(n*2+1);i++)
	{
		string result = "";
		for(int j=i;j<(n*2+1)+i;j++)
		{
			result += v[j];
			if(result == ans) cnt++;
		}
	}
	cout<<cnt<<'\n';
	
}
