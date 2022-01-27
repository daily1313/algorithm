#include <iostream>
#include <cstdio>
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
	cout<<(int)num[0]<<(int)num[1]<<endl;
}
