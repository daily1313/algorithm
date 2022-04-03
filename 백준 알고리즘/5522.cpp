#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>p;
	for(int i=0;i<5;i++){
		int a;
		cin>>a;
		p.push_back(a);
	}
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=p[i];
	}
	cout<<sum<<'\n';
}
