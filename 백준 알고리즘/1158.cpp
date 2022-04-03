#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int>q;
	int n,m;
	cin>>n>>m;
	int i;
	for(i=1;i<=n;i++){
		q.push(i);
	}
	int j;
	cout<<"<";
	for(i=0;i<n-1;i++){
		for(j=0;j<m-1;j++){
			q.push(q.front());
			q.pop();
		}
		cout<<q.front()<<", ";
		q.pop();
	}
	cout<<q.front()<<">"<<'\n';
}
