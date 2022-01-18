#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int i;
	int n;
	cin>>n;
	vector<int>d(n+1);
	vector<int>p(n+1);
	for(i=1;i<=n;i++){
		cin>>p[i];	
	}
	int j;
	for(i=1;i<=n;i++){
		d[i] = -1;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(d[i] == -1 || d[i] > d[i-j]+p[j]){
				d[i] = d[i-j]+p[j];
			}
		}
	}
	cout<<d[n]<<endl;
	
}
