#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int cnt0=0;
int cnt1=0;
int main()
{
	string str;
	cin>>str;
	char a = str[0];
	for(int i=0;i<str.length();i++)
	{
		if(a=='0'){
			cnt0+=1;
		}
		else{
			cnt1+=1;
		}
	}
	for(int i=1;i<str.length();i++){
		if(str[i]=='0'){
			if(a!=str[i]) cnt0+=1;
		}
		if(str[i]=='1'){
			if(a!=str[i]) cnt1+=1;
		}
		a = str[i];
	}
	int result = min(cnt0,cnt1);
	cout<<result<<'\n';
}
