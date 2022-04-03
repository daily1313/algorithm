#include <iostream>
using namespace std;
int prime[1000001];
bool check[1000001];
int main()
{
	
	int pn=0;
	
	
	int a,b;
	cin>>a>>b;
	int i;
	check[0] = check[1] = 1;
	for(i=2;i<=b;i++){
		if(check[i]==false){
			prime[pn++]=i;
		}
		int j;
		for(j=i+i;j<=b;j+=i){
			check[j]=true;
		}
	}
	for(i=a;i<=b;i++){
		if(check[i]==false){
			cout<<i<<endl;
		}
	}
}
