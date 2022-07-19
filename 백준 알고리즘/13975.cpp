#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	priority_queue<long long,vector<long long>,greater<long long>>pq;
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		long long sum =0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			pq.push(a);
		}
		while(pq.size()>1)
		{
			long long n1 = pq.top();
			pq.pop();
			long long n2 = pq.top();
			pq.pop();
			sum += (n1+n2);
			pq.push(n1+n2);	
		}
		cout<<sum<<'\n';
		pq.pop();
	}
}
