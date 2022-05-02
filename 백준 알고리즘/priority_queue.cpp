#include <iostream>
#include <queue>
using namespace std;
int main()
{
	//최대 힙 
	priority_queue<int, vector<int>> q;
	//int 데이터타입, vector<int> 데이터들이 들어갈 컨테이너
	int a;
	for(int i=0;i<10;i++)
	{
		cin>>a;
		q.push(a);	
	} 
	while(!q.empty()){
		cout<<q.top()<<'\n';
		q.pop();
	}
	priority_queue<int, vector<int>,greater<int>> q2;
	//int 데이터타입, vector<int> 데이터들이 들어갈 컨테이너, greater<int> 내림차순 정렬 
	for(int i=0;i<10;i++)
	{
		cin>>a;
		q2.push(a);	
	} 
	while(!q2.empty()){
		cout<<q2.top()<<'\n';
		q2.pop();
	}
	
	
	
}
