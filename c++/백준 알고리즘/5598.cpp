#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		
		if(str[i]>'C'){
			str[i]-=3;
			cout<<str[i];
			continue;
		}
		else if(str[i]=='A') cout<<"X";
		else if(str[i]=='B') cout<<"Y";
		else if(str[i]=='C') cout<<"Z";
	}
}
