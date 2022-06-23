#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>v;
int n;
int sum;
int main()
{
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i]>sum+1){ 
			break;
		}
		sum+=v[i];
	}
	cout<<sum+1;
	return 0;
}
