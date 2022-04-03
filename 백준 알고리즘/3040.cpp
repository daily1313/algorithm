#include <iostream>
using namespace std;
int a[9];
int main()
{
	int sum=0;
	for(int i=0;i<9;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int j=0;j<9;j++){
		for(int k=j+1;k<9;k++){
			if(sum-a[j]-a[k]==100){
				for(int i=0;i<9;i++){
					if(i==j || i==k) continue;
					cout<<a[i]<<'\n';
				}
			}
		}
	} 
}
