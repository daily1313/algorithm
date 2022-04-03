#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string str;
	for(int i=0;i<t;i++){
		cin>>str;
		if(str.size()==1){
			cout<<str[0]<<str[0]<<'\n';
		}
		else{
			cout<<str[0]<<str[str.size()-1]<<'\n';
		}
	}
}
