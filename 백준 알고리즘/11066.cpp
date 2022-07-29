#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum=0;
		priority_queue<int,vector<int>,greater<int>>q;
	
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			q.push(a);	
		}
		while(q.size()>1)
		{
			int n1 = q.top();
			q.pop();
			int n2 = q.top();
			q.pop();
			sum += (n1+n2);
			q.push(n1+n2);
		}
		cout<<sum<<'\n';
	
	}
}
