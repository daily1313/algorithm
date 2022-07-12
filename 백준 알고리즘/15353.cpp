#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	deque<int>v1;
	deque<int>v2;
	vector<int>ans;
	vector<int>::iterator it;
	for(int i=0;i<a.size();i++)
	{
		v1.push_back(a[i]-'0');
	}
	for(int i=0;i<b.size();i++)
	{
		v2.push_back(b[i]-'0');
	}
	int len = v1.size()>v2.size()?v1.size():v2.size();
	if(v1.size()>v2.size())
	{
	for(int i=0;i<v1.size()-v2.size();i++)
	{
		v2.push_front(0);	
	}
	}
	else if(v1.size()<v2.size())
	{
	for(int i=0;i<v2.size()-v1.size();i++)
	{
		v1.push_front(0);	
	}
	}
	reverse(v2.begin(),v2.end());
	reverse(v1.begin(),v1.end());
	
	int carry = 0;
	for(int i=0;i<len;i++)
	{
		if(v1[i]+v2[i]+carry>=10)
		{
			ans.push_back((v1[i]+v2[i]+carry)%10);
			carry = 1;
		}
		else{
			ans.push_back(v1[i]+v2[i]+carry);
			carry = 0;		
		}
	}
	if(carry) ans.push_back(carry);
	reverse(ans.begin(),ans.end());
	for(auto it=ans.begin();it!=ans.end();it++)
	{
		cout<<(*it);
	}
	
}
