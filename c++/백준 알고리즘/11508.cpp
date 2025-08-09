#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int>v(n);
	int a;
	for(int i=0;i<n;i++)
	{
		
		cin>>a;
		v.push_back(a);
	}
	sort(v.rbegin(),v.rend());
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if((i+1)%3==0) 
		{
			continue;
		}
		sum+=v[i];
	}
	cout<<sum;
}
