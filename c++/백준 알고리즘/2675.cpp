#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t;
	int r;
	char name[21]={0};
	cin>>t;
	int i,j,m;
	for(m=0;m<t;m++){
		int k=0;
		cin>>r;
		cin>>name;
		for(i=0;i<strlen(name);i++){
			for(j=0;j<r;j++){
				cout<<name[i];
			}
		}
		cout<<endl;
	}
	
}
