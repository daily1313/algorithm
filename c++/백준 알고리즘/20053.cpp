#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	int n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		vector<int>a(n);
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int max = *max_element(a.begin(),a.end());
		int min = *min_element(a.begin(),a.end());
		cout<<min<<' '<<max<<'\n';
	}
	
}
