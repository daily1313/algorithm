#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
vector<int>v;

int result;
int main()
{
	int n;
	cin>>n;
	int a;
	vector<int>::iterator i;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),greater<int>());
	int cnt=1;
	for(auto i=v.begin();i!=v.end();i++)
	{
		result = max(result,(*i)*cnt);
		cnt++;	
	}
	cout<<result<<'\n';
}
