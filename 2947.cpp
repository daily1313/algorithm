#include <iostream>
#include <algorithm>
int a[5];
using namespace std;

int main()
{
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
		
		for(int i=4;i>=0;i--){
			for(int j=0;j<i;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
			
						for(int k=0;k<=4;k++){
							cout<<a[k]<<' ';
						}
						cout<<'\n';
					}
				}
			}	
}

