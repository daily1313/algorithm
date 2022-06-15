#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

vector<pair<int,int>> r;
priority_queue<int,vector<int>,greater<int>>pq;
//�� ��° ������ �������� �����ϱ� ���� �켱���� ť  
int main()
{
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		r.push_back(make_pair(a,b));
	}
	sort(r.begin(),r.end());
	pq.push(r[0].second); //ù��° ������ �ð� pq�� �߰�
	for(int i=1;i<n;i++)
	{
		if(pq.top()<=r[i].first)
		{
			pq.pop();
			pq.push(r[i].second);
		}
		else
		{
			pq.push(r[i].second);
		}
	 }
	 cout<<pq.size(); 
}
