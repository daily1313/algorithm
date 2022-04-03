#include <iostream>
using namespace std;
int a[8];
int main()
{
	for(int i=0;i<8;i++)
	{
		cin>>a[i];
	}
	int cnta=0;
	int cntb=0;
	for(int i=0;i<8;i++){
		if(a[i]==i+1){
			cnta++;
		}
		else if(a[i]==8-i){
			cntb++;
		}
	}
	if(cnta==8){
		cout<<"ascending"<<'\n';
		return 0;
	}
	else if(cntb==8){
		cout<<"desending"<<'\n';
		return 0;
	}
	else{
		cout<<"mixed"<<'\n';
		return 0;
	}
}
