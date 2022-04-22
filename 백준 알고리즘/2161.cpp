#include <iostream>
#include <queue>
using namespace std;
int a[1001];
int main()
{
	int n;
	cin>>n;
	queue<int>q;
	for(int i=0;i<n;i++)
	{
		q.push(i+1);
	}
	while(1){
		if(q.size()==0) return 0;
		cout<<q.front()<<' ';
		q.pop();
		q.push(q.front());
		q.pop();	
	}
	
}
