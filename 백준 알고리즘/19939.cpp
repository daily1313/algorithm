#include <iostream>
#include <algorithm>
using namespace std;
vector<int>v;
int main()
{
	int n,k;
	int sum=0;
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		v.push_back(i);
		sum += i;
	}
	if(sum==n){
		cout<<v[v.size()-1]-v[0];
	}
	else if(sum<n)
	{
		int temp = n-sum;
		int index = k;
		while(1)
		{
			v[index-1]+=1;
			index--;
			temp--;
			if(temp==0){
				break;
			}
			if(index==0){
				index=k;
			}
		}
		cout<<v[v.size()-1]-v[0];
	}
	else{
		cout<<-1;
	}
}
