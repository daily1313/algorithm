#include <iostream>
#include <algorithm>

using namespace std;
int d[100001];
int a[100001];
int main()
{
	int i;
	int n;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
	for(i=0;i<n;i++){
		d[i] = a[i];
		if(i==0) continue;
		if(d[i] < d[i-1]+a[i]){
			d[i] = d[i-1]+a[i];
		}
	}
	int result = *max_element(d,d+n);
	cout<<result<<endl;
}
