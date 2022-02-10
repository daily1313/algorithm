#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string name;
	cin>>n;
	for(int i=0;i<n+1;i++){
		getline(cin,name);
		if(name[0]>='a' && name[0]<='z'){
			name[0]-=32;
		}
		for(int j=0;j<name.size();j++)
		{
			
			cout<<name[j];
		}
		cout<<'\n';
	}
	
}
