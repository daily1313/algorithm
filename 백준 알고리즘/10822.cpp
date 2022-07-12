#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	string number="";
	int sum=0;
	for(int i=0;i<str.size();i++)
	{
	
			if(str[i]==','){
				sum+= stoi(number);
	
				number ="";
				continue;
			}
			else number +=str[i];
		}
	cout<<sum + stoi(number);
}
