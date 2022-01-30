#include <iostream>
using namespace std;

int main()
{
	int n=1,m=1;
	while(n!=0 && m!=0){
		cin>>n>>m;
		if(n==0 && m==0){return 0;
		}
		cout<<n+m<<'\n'; 
	}
}

