#include <iostream>
using namespace std;
int count(int n,int m);
int main()
{
	int t;
	
	
	cin>>t;
	for(int j=0;j<t;j++){
	int n,m;
	cin>>n>>m;
	cout<<count(n,m)<<'\n';
	
	}
}
int count(int n,int m){
		int cnt=0;
	for(int i=n;i<=m;i++){
		int k=i;
		if(k==0){
			cnt=1;
		}
		else{
		while(k>0){
			if(k%10==0){
				cnt++;
			}
			k/=10;
		}
		}
	}
	return cnt;
}
