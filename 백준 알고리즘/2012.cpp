#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	unsigned long long sum=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		sum+=abs(i+1-v[i]);
	}
	cout<<abs(sum)<<'\n';
	
}
