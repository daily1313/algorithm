#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char a[15][15] ={0};
int main()
{
	string str;
	int max=0;
	for(int i=0;i<5;i++)
	{
		cin>>str;
		if(str.size()>max){
			max = str.size();
		}		
		for(int j=0;j<str.size();j++){
			a[i][j]=str[j];
		}
		
	}
	for(int i=0;i<max;i++){
		for(int j=0;j<5;j++){
		if ((a[j][i] >= 'a'&&a[j][i] <= 'z') || (a[j][i] >= 'A'&&a[j][i] <= 'Z') || (a[j][i] >= '0'&&a[j][i] <= '9'))
			cout<<a[j][i];
		}
	}
	
}
