#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
priority_queue <int, vector<int>, greater<int> > pq;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		pq.push(a);
	}
	long long sum = 0;
	while(pq.size()>1)
	{
		int x,y;
		x=pq.top();
		pq.pop();
		y=pq.top();
		pq.pop();
		sum += (x+y);
		pq.push(x+y);
	}
	cout<<sum<<'\n';
}
