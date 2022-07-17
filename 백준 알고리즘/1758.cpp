#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),greater<int>());
	long long sum = 0;
	for(int i=0;i<n;i++)
	{
		if(v[i]-((i+1)-1)<0) continue;
		else sum+=(v[i]-((i+1)-1));
	}
	cout<<sum<<'\n';
}
