#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<string>v1;
	vector<string>v2;
	string a,b;
	while(n--)
	{
		cin>>a;
		v1.push_back(a);
	}
	sort(v1.begin(),v1.end());
	int cnt=0;
	while(m--)
	{
		cin>>b;
		if(binary_search(v1.begin(),v1.end(),b)){
			cnt++;
		}
	}
	cout<<cnt;
	
}
