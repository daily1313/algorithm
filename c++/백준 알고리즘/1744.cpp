#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int num;
	int one = 0;
	int zero = 0;
	vector<int>p;
	vector<int>n;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		int a;
		cin>>a;
		if(a>1) p.push_back(a);
		else if(a<0) n.push_back(a);
		else if(a==0) zero++;
		else one++;
		
	}
	if(p.size()%2) p.push_back(1);
	if(n.size()%2) zero == 0 ? n.push_back(1) : n.push_back(0);
	int sum = 0;
	sort(p.begin(),p.end());
	sort(n.rbegin(),n.rend());
	for(int i=p.size()-1;i>0;i-=2){
		sum+=(p[i]*p[i-1]);
	}
	
	for(int i=n.size()-1;i>0;i-=2){
		sum+=(n[i]*n[i-1]);
	}
	cout<<sum + one<<'\n';
}
