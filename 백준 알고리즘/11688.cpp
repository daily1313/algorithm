#include <iostream>
using namespace std;
int gcd(int x,int y)
{
	if(x>=y){
		if(y==0) {return x;}
		return gcd(y,x%y);
	}
	else{
		if(x==0) {return y;}
		return gcd(x,y%x);
	}
}
int main()
{
	int n,a,b,c,ans;
	cin>>n;
	if(n==2){
		cin>>a>>b;
		ans=gcd(a,b);
		for(int i=1;i<=ans;i++){
			if(ans%i==0)cout<<i<<'\n';
		}
	}
	else{
		cin>>a>>b>>c;
		ans=gcd(a,gcd(b,c));
		for(int i=1;i<=ans;i++){
			if(ans%i==0)cout<<i<<'\n';
		}
	}
}
