#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,k;
	int cnt=0;
	vector<char>v;
	cin>>n>>k;
	string str;
	cin>>str;
	
	for(int i=0;i<str.size();i++)
	{
		v.push_back(str[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(v[i]!='P') continue;
		for(int j = i-k;j<=i+k;j++)
		{
			if(v[j]=='H')
			{
				v[j]='A';
				cnt++;
				break;
			}
		}	
	}
	cout<<cnt;
}
