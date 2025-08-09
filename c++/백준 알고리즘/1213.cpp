#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string str;
	int alpha[26]={0};
	
	cin>>str;
	
	for(int i=0;i<str.size();i++)
	{
		alpha[str[i]-'A']++;
	}
	int cnt=0;
	string frontans="";
	string centerans="";
	string backans="";
	for(int i=0;i<26;i++)
	{
		if(alpha[i]%2==1){
			cnt++;
			centerans+=i+'A';
		}
		for(int j=0;j<alpha[i]/2;j++)
		{
			frontans+=i+'A';
		}
		for(int k=0;k<alpha[25-i]/2;k++)
		{
			backans+=25-i+'A';
		}
	}
	if(cnt>1) {
		cout<<"I'm Sorry Hansoo";
		return 0;
	}
	else
	{
	if(frontans!="")
	{
		cout<<frontans;
	}
	if(centerans!="")
	{
		cout<<centerans;
	}
	if(backans!="")
	{
		cout<<backans;
	}
	}
}
