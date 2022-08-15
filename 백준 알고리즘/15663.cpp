#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int a[9];
int num[9];
bool visited[9] = {false};
set<vector<int>>s;
vector<int>v;
vector<int>::iterator it;
int n,m;
void func(int index) 
{
	if(index == m){
		for(int i=0;i<m;i++)
		{
			v.push_back(a[i]);
		}
			s.insert(v);
			v.clear();
	}
	else{
	for(int i=0;i<n;i++)
		{
			if(!visited[i])
			{
				visited[i] = true;
				a[index] = num[i];
				func(index+1);
				visited[i] = false;
			}
		}
	}
}

int main()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	func(0);
	for(auto vector : s){
		for(auto temp : vector){
			cout<<temp<<' ';
		}
		cout<<'\n';
	}
}
