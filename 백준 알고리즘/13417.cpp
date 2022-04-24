#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	char a;
	while(n--)
	{
		vector<char>v;
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(int j=0;j<v.size();j++){
			cout<<v[j];
		}
		cout<<'\n';
	}
}
