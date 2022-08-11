#include <iostream>
int n, s;
int cnt=0;
int arr[1000001];
using namespace std;
void sum(int cur, int tot)
{
	if(cur == n)
	{
		if(tot == s) cnt++;
		return;
	}
	sum(cur+1,tot);
	sum(cur+1,tot+arr[cur]);
}
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sum(0,0);
	if(s==0) cnt--;
	cout<<cnt;
}
