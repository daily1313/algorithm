#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mx = *max_element(a,a+n);
	int mn = *min_element(a,a+n);
	cout<<mx-mn<<endl;
}
