#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[100];
int main()
{
	int t;
	int n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxx=*max_element(a,a+n);
	int minn=*min_element(a,a+n);
	cout<<(maxx-minn)*2<<endl;
	}
	
}
