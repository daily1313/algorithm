#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b;
	cin>>c;
		if(a+(b+c)/60<24){
		cout<<a+(b+c)/60<<' '<<(b+c)%60<<endl;
		return 0;
		}
		else{
			cout<<(a+(b+c)/60)%24<<' '<<(b+c)%60<<endl;
			return 0;	
		}
}
