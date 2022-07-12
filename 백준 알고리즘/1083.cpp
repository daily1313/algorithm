#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		v.push_back(num);
	}
	int s;
	cin>>s;
	int cnt=0;
	int ans = *max_element(v.begin(),v.end());
	for(int i=0;i<=v.size();i++){
		
		for(int j=0;j<v.size()-1-i;j++){
			if(v[j]-v[j+1]<0){
				if(cnt==s) break;
				swap(v[j],v[j+1]);
				cnt++;
			}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<' ';
	}
}
