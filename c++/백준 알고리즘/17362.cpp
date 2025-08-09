#include <iostream>
using namespace std;
int one[1001];
int two[1001];
int thr[1001];
int four[1001];
int fiv[1001];

int main()
{
	int i,j,n;
	for(i=0;i<=300;i++)
	{
		one[i] = 8*i+1;
		thr[i] = 4*i+3;
		fiv[i] = 5*i+8;
	}
	for(j=0;j<=300;j++)
	{
		if(j%2==0){
			two[j] = 2+8*j;
		}
		else{
			two[j] = 8*j;
		}
	}
	for(j=0;j<=300;j++)
	{
		if(j%2==0){
			four[j] = 4+8*j;
		}
		else{
			four[j] = 8*j-2;
		}
	}
	cin>>n;
	int k;
	for(k=0;k<300;k++){
		if(n==one[k]) 
		{cout<<1<<endl;
		return 0;
		}
		else if(n==two[k]) 
		{cout<<2<<endl;
		return 0;
		}
		else if(n==thr[k]) 
		{cout<<3<<endl;
		return 0;
		}
		else if(n==four[k]) 
		{cout<<4<<endl;
		return 0;
		}
		else if(n==fiv[k]) 
		{cout<<5<<endl;
		return 0;
		}
		else{
			continue;
		}
	}
	
}
