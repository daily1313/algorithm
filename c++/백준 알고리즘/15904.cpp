#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char arr[1001];
int main()
{
	string str;
	getline(cin,str);
	int cnt=0;
	for(int i=0;i<str.length();i++)
	{
		if(i==0){
			arr[i]=str[i];
		}
		else if(str[i]>='A' && str[i]<='Z'){
			arr[++cnt]=str[i];
		}
	}
	int checku=0;
	int checkc1=0;
	int checkc2=0;
	int checkp=0;
	for(int i=0;i<=cnt;i++){
		if(arr[i]=='U' && checkc1==0 && checkp==0) checku++;
		if(arr[i]=='C' && checku>=1 && checkp==0) checkc1++;
		if(arr[i]=='P' && checku>=1 && checkc1>=1) checkp++;
		if(arr[i]=='C' && checku>=1 && checkc1>=1 && checkp>=1) checkc2++;
	}
	if(checku>=1 && checkc1>=1 && checkp>=1 && checkc2>=1)
	{
		cout<<"I love UCPC"<<'\n';
	}
	else{
		cout<<"I hate UCPC"<<'\n';
	}
	
	
}
