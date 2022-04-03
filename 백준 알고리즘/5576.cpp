#include <iostream>
#include <algorithm>
using namespace std;
int x[10];
int y[10];

int main()
{
	for(int i=0;i<10;i++){
		cin>>x[i];
	}
	for(int j=0;j<10;j++){
		cin>>y[j];
	}
	sort(x,x+10);
	sort(y,y+10);
	cout<<x[7]+x[8]+x[9]<<' '<<y[7]+y[8]+y[9]<<'\n';
}
