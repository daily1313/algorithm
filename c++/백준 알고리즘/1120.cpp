#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	int cnt=0;
	if(a.size()==b.size())
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=b[i]) cnt++;
		}
		cout<<cnt<<'\n';
	}
	else
	{
			if(b.find(a) != string::npos) 
			{
				cout<<0<<'\n';
				return 0;
			}
			int cnt1=0;
			int cnt2=0;
			string s3="";
			string s4="";
			for(int i=0;i<b.size()-a.size();i++)
			{
				s3+=b[i];
			}			
			s3+=a;
			
			s4+=a;
			for(int j=a.size();j<b.size();j++)
			{
				s4+=b[j];
			}
			for(int i=0;i<s3.size();i++)
			{
				if(s3[i]!=b[i]) cnt1++;
				if(s4[i]!=b[i]) cnt2++;
			}
			int result = min(cnt1,cnt2);
			cout<<result<<'\n';				
		}
}
	

