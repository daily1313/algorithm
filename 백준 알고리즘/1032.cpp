#include <iostream>
#include <cstring>
using namespace std;
char name[50];
char compare[50];
int main()
{
	int n;
	cin>>n;
	cin>>name;
	int len = strlen(name);
	for(int i=1;i<n;i++)
	{
		cin>>compare;
		for(int j=0;j<len;j++){
			if(compare[j]!=name[j]){
				name[j] = '?';
			}
		}
	}
	
	cout<<name<<endl;
}
