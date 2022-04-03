#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long sum = 0;
	int maxn = 0;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		maxn = max(maxn,t);
		sum+=t;
	}
	sum -=maxn;
	cout<<sum;
}
