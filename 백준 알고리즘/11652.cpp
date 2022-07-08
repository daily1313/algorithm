#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
bool cmp(string s1,string s2)
{
	int sums1 = 0;
	int sums2 = 0;
	if(s1.size()==s2.size())
	{
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]>='0' && s1[i]<='9')
			{
				sums1 += (s1[i] - '0');
			}
			if(s2[i]>='0' && s2[i]<='9')
			{
				sums2 += (s2[i] - '0');
			}
		}
		if(sums2==sums1){
			return s1<s2;
		}
		else{
			return sums1<sums2;
		}
	}
	else return s1.size()<s2.size();
}
int main()
{
	int n;
	cin>>n;
	string str;
	vector<string>v;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		v.push_back(str);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<'\n';
	}
	
}
