#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,l;
	int cnt=1;
	cin>>n>>l;
	int *list = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>list[i];
	}
	sort(list,list+n);
	int start = list[0];
	for(int i=1;i<n;i++)
	{
		
		if(list[i]-start+1>l)
		{
			cnt++;
			start = list[i];
		}
	}
	cout<<cnt<<'\n';
}
