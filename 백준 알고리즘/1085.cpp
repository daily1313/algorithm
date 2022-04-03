#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	
	int i,j,k;
	i = min(x,w-x);
	j = min(y,h-y);
	
	k = min(i,j);
	cout<<k<<endl;
	
}
