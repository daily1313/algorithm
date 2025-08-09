#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a=300;
	int b=60;
	int c=10;
	if(t%10!=0){
		cout<<-1<<endl;
		return 0;
	}
	else{
		cout<<t/a<<' '<<t%a/b<<' '<<t%b/c<<endl;
		return 0;
	}
}
