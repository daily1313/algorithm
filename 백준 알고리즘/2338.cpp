#include <iostream>
using namespace std;
int main()
{
	int L;
	cin>>L;
	int t=L/5;
	if(L<5){
		cout<<1<<endl;
		return 0;
	}
	if(L%5!=0){
		t+=1;
		cout<<t<<endl;
	}
	else{
		cout<<t<<endl;
	}
}
