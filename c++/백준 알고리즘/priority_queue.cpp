#include <iostream>
#include <queue>
using namespace std;
int main()
{
	//�ִ� �� 
	priority_queue<int, vector<int>> q;
	//int ������Ÿ��, vector<int> �����͵��� �� �����̳�
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
	//int ������Ÿ��, vector<int> �����͵��� �� �����̳�, greater<int> �������� ���� 
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
