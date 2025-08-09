#include <iostream>
using namespace std;
int d[1000001];
int go(int n);
void result(int n);
int main()
{
	int n;
	cin>>n;
	go(n);
	cout<<go(n)<<endl;
	result(n);
}
int go(int n){
	if(n==1) return 0;
	if(d[n]>0) return d[n]; // 메모리제이션
	d[n] = go(n-1)+1;
	if(n%2==0){
		int temp = go(n/2)+1;
		if(d[n]>temp) d[n] = temp;
	}
	if(n%3==0){
		int temp = go(n/3)+1;
		if(d[n]>temp) d[n] = temp;
	}
	return d[n];
}
void result(int n)
{
	if(n==1) cout <<0;
	d[n] = (n-1)+1;
	if(n%2==0){
		int temp = n/2+1;
		if(d[n]>temp) d[n] = temp;
		cout<<d[n]<<' ';
		result(temp);
	}
	if(n%3==0){
		int temp = n/3+1;
		if(d[n]>temp) d[n] = temp;
		cout<<d[n]<<' ';
		result(temp);
	}
}
