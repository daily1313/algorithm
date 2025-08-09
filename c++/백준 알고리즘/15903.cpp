#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num;
	vector<unsigned long long>a;
	vector<unsigned long long>::iterator vi;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		a.push_back(num);
	}
	for(int i=0;i<m;i++)
	{
		sort(a.begin(),a.end());
		long long sum = a[0] + a[1];
		a[0] = sum;
		a[1] = sum;
	}
	long long result=0;
	for(vi=a.begin();vi!=a.end();vi++)
	{
		result+=(*vi);
	}
	cout<<result;
	
	
}
