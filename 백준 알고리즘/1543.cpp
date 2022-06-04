#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if(b.size()>a.size())
	{
		cout<<0<<'\n';
	}
	else{
		int cnt=0;
		for(int i=0;i<a.size()-b.size()+1;i++)
		{
		bool check = true;
		for(int j=0;j<b.size();j++)
		{
			if(a[i+j]!=b[j])
			{
				check=false;
				break;
			}
		}
		if(check)
		{
			cnt++;
			i+=b.size()-1;
		}
		}
		cout<<cnt<<'\n';
	}
	
}
