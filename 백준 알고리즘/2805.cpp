#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>tree;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		tree.push_back(a);
	}
	
	int l = 0;
	int r = *max_element(tree.begin(),tree.end());
	int ans;
	int mid;
	while(l<=r)
	{
		long long sum=0;
		mid = (l+r)/2;
		for(int i=0;i<n;i++)
		{
			if(tree[i]>mid){
				sum += (tree[i]-mid);
			}
		}
		if(sum<m)
		{
			r = mid -1;
		}
		else
		{
			ans = mid;
			l = mid +1;
		}
	}
	cout<<ans;
	
}
