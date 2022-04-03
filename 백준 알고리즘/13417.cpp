#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		vector<char>c;
		for(int j=0;j<t;j++){
			char alpha;
			cin>>alpha;
			c.push_back(alpha);
		}
		sort(c.begin(),c.end());
		for(int j=0;j<t;j++){
			cout<<c[j];
		}
		cout<<'\n';
	}
}
	

