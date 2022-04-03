#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++)
	{
		if(i==0){
			cout<<str[i];
		}
		if(str[i]=='-'){
			cout<<str[i+1];
		}
	}	
}
