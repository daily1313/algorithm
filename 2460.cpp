#include <iostream>
#include <algorithm>
int a[10];
int b[10];
int c[10];
int sum[10];
using namespace std;
int main()
{
	for(int i=0;i<10;i++){
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<10;j++){
		c[j] = b[j] -a[j]; 
	}
	sum[0] = c[0];
	for(int k=1;k<10;k++){
		sum[k] = sum[k-1]+c[k];
	}
	int maxinum = *max_element(sum,sum+10);
	cout<<maxinum<<endl; 
}

