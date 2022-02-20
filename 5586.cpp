#include <iostream>
#include <string>
using namespace std;
int cnt1=0;
int cnt2=0;
int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.size()-2;i++)
	{
		if(str[i]=='J' && str[i+1]=='O' && str[i+2]=='I'){
			cnt1++;
		}
		else if(str[i]=='I' && str[i+1]=='O' && str[i+2]=='I'){
			cnt2++;
		}
	}
	cout<<cnt1<<'\n';
	cout<<cnt2<<'\n';
}
