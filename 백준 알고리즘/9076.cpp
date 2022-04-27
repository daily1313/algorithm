#include <iostream>
#include <algorithm>
int arr[5];
using namespace std;

int main()
{
	int t;
	cin>>t;
	vector<int>v;
	for(int i=0;i<t;i++){
		int cnt=0;
		for(int j=0;j<5;j++){
			cin>>arr[j];
		}
		sort(arr,arr+5);
		int sum = arr[1]+arr[2]+arr[3];
		for(int k=0;k<2;k++){
			if(arr[4-k]-arr[k]>=4){
				cnt++;
			}
		}
		if(cnt==2){
			cout<<"KIN"<<'\n';
		}
		else{
			cout<<sum<<'\n';
		}
	}
	
}
