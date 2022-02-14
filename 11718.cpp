#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	
	while(!cin.eof())
	{
		if(str.size()>100){
			return 0;
		}
		cout<<str<<'\n';
	}
}
