#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
char num[17];
int main()
{
	int i,j;
	int number = 15;
	
	for(i=0;i<16;i+=2){
		cin>>num[i];
		num[i]-=48;
	}
	for(i=1;i<16;i+=2){
		cin>>num[i];
		num[i]-=48;
	}
	for(i=0;i<14;i++){
		for(j=0;j<number;j++){
			num[j] = (num[j]+num[j+1])%10;
		}
		number--;
	}
	printf("%d%d",num[0],num[1]);
}
