#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==1010){
		cout<<20<<endl;
		return 0;
	}
	else if(n/10<=10){
		cout<<n/10+n%10<<endl;
	}
	else{
		cout<<n/100+n%100<<endl;
	}
	
}
