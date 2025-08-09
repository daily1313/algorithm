#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while(1)
	{
		int cnt=0;
		getline(cin,str);
		if(str=="#"){
			return 0;
		}
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='a'-32||str[i]=='e'-32||str[i]=='i'-32||str[i]=='o'-32||str[i]=='u'-32){
				cnt++;
			}
			else{
				continue;
			}
		}
		cout<<cnt<<'\n';
	}
	
	
}
