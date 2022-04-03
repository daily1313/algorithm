#include <iostream>
#include <algorithm>
using namespace std;
int x[10];
int y[10];

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){	
	for(int i=0;i<10;i++){
		cin>>x[i];
	}
	sort(x,x+10);
	cout<<x[7]<<'\n';
	}
}
