#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	vector<char>v1;
	vector<char>v2;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int bwcnt=0;
		int wbcnt=0;
		for(int i=0;i<n;i++)
		{
			char a;
			cin>>a;
			v1.push_back(a);
		}
			for(int i=0;i<n;i++)
		{
			char b;
			cin>>b;
			v2.push_back(b);
		}
		for(int i=0;i<v1.size();i++)
		{
			if(v1[i]=='B' && v2[i]=='W') bwcnt+=1;
			else if(v1[i]=='W' && v2[i]=='B') wbcnt+=1;
		}
		cout<<max(bwcnt,wbcnt)<<'\n';
		v1.clear();
		v2.clear();
	}
}
