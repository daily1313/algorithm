#include <iostream>
#include <set>
using namespace std;
set<int>s;
set<int>::iterator it;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		s.insert(num);
	}
	for(auto it = s.begin();it!=s.end();it++)
	{
		cout<<(*it)<<' ';
	}
}
