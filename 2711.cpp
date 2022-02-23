#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t>>str;
		for(int i=0;i<str.length();i++){
			if(i==t-1) continue;
			cout<<str[i];
		}
		cout<<'\n';
	}
}
