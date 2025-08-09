#include <iostream>
using namespace std;
int a[3]={1,0,0};

int main()
{
	int n;
	cin>>n;
	int x,y;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		int temp;
		temp = a[x-1];
		a[x-1] = a[y-1];
		a[y-1] = temp;
	}
	for(int i=0;i<3;i++){
		if(a[i]==1){
			cout<<i+1<<'\n';
		}
	}
}
