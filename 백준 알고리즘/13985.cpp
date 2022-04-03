#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	if((str[0]-'0')+(str[4]-'0')==(str[str.size()-1]-'0')){
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
