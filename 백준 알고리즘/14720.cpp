#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>v;
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	int now=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(v[i]==0 && now==0){
			cnt++;
			now = 1;
		}
		if(v[i]==1 && now==1){
			cnt++;
			now = 2;
		}
		if(v[i]==2 && now==2){
			cnt++;
			now = 0;
		}
	}
	cout<<cnt<<'\n';
}
