#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;

	for(int i=0;i<str1.size();i++)
	{
		if(str1[i]=='6'){
			str1[i]='5';
		}
	}
	for(int i=0;i<str2.size();i++)
	{
		if(str2[i]=='6'){
			str2[i]='5';
		}
	}
	cout<<stoi(str1)+stoi(str2);
		for(int i=0;i<str1.size();i++)
	{
		if(str1[i]=='5'){
			str1[i]='6';
		}
	}
	for(int i=0;i<str2.size();i++)
	{
		if(str2[i]=='5'){
			str2[i]='6';
		}
	}
	cout<<stoi(str1)+stoi(str2)<<' ';
}
