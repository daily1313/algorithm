#include <iostream>
#include <cstring>
using namespace std;
char name[101];
int main()
{
	int n;
	
	cin>>name;
	int len = strlen(name);
	for(int i=0;i<len;i++){
	if(name[i]>='a' && name[i]<='z'){
			name[i]-=32;
	}
	else if(name[i]>='A' && name[i]<='Z'){
			name[i]+=32;
	}
	
	}
	
		for(int j=0;j<len;j++)
		{
			
			cout<<name[j];
		}
		cout<<'\n';
	
}
