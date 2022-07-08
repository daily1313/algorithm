#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n*n);
	for(int i=0;i<n*n;i++)
	{
		cin>>v[i];
		
	}
	sort(v.begin(),v.end(),greater<int>());
	cout<<v[n-1]<<'\n';
}
