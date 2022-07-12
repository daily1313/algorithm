#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	
	int result =2000000001;
	int l = 0;
	int r = n-1;
	int fl,fr;
	while(l<r)
	{
		int sum = v[l]+v[r];
		if(result>abs(sum)){
			result = abs(sum);
			fl = v[l];
			fr = v[r];
		}
		if(sum>0) r--;
		else l++;
	}
	cout<<fl<<' '<<fr<<'\n';
	}
	
