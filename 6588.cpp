#include <iostream>
using namespace std;
#define max 1000000
int prime[max];
bool check[max+1];
int pn=0;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int a;
	int i;
	for(i=2;i<=max;i++){
		if(check[i]==false){
			prime[pn++]=i;
		}
		int j;
		for(j=i+i;j<=max;j+=i){
			check[j]=true;
		}
	}
	while(1){
		cin>>a;
		if(a==0 || a==1){
			break;
		}
		for(i=1;i<pn;i++){
			if(check[a-prime[i]]==false){
				cout<<a<<" = "<<prime[i]<<" + "<<a-prime[i]<<'\n';
				break;
			}
		}
	}
	
}
