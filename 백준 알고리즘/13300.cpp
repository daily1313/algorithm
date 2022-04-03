#include <iostream>
using namespace std;
int a[1001];
int k[1001];
int m[7]={0,};
int w[7]={0,};

int main()
{
	int n,b;
	cin>>n>>b;
	for(int i=0;i<n;i++){
		cin>>a[i]>>k[i];
	}
	for(int j=0;j<n;j++){
		if(a[j]==0){
			++w[k[j]];	
		}
		if(a[j]==1){
			++m[k[j]];
		}
	}
	int cnt=n;
	for(int z=1;z<=6;z++){
		if(w[z]==b){
			cnt-=(w[z]-1);
		}
		if(w[z]>b){
			cnt+=(w[z]/b-(w[z]-1));
		}
		if(m[z]==b){
			cnt-=(m[z]-1);
		}
		if(m[z]>b){
			cnt+=(m[z]/b-(m[z]-1));
		}
		
	}
	cout<<cnt<<endl;
}
