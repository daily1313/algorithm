#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> q;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	cout<<"<";
	while(!q.empty())
	{
		for(int i=0;i<k;i++)
		{
			if(i==k-1)
			{
				cout<<q.front();
				if(q.size()!=1)
				{
					cout<<", ";
				}
			}
			else
			{
				q.push(q.front());
			}
			q.pop();
		}
		
	}
	cout<<">";
}
