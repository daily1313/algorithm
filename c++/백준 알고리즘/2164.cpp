#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	queue<int>q;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		q.push(i+1);
	}
	while(1){
		if(q.size()==1) break;
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout<<q.front();
}
