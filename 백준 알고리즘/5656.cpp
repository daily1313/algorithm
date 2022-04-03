#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n1,n2;
	string str;
	while(1)
	{
		int i=1;
		cin>>n1>>str>>n2;
		if(str.length()==1){
			if(str[0]=='>'){
				if(n1>n2){
					
					cout<<"Case "<<i<<": true"<<'\n';
					i++;
				}
				else{
					cout<<"Case "<<i<<": false"<<'\n';
					i++;
				}
			}
			else if(str[0]=='<'){
				if(n1<n2){
					cout<<"Case "<<i<<": true"<<'\n';
					i++;
				}
				else{
					cout<<"Case "<<i<<": false"<<'\n';
					i++;
				}
			}
			else if(str[0]=='E'){
				return 0;
			}
		}
		else{
			if(str[0]=='>' && str[1]=='='){
				if(n1>=n2){
					
					cout<<"Case "<<i<<": true"<<'\n';
					i++;
				}
				else{
					cout<<"Case "<<i<<": false"<<'\n';
					i++;
				}
			}
			else if(str[0]=='<' && str[1]=='='){
				if(n1<=n2){
					cout<<"Case "<<i<<": true"<<'\n';
					i++;
				}
				else{
					cout<<"Case "<<i<<": false"<<'\n';
					i++;
				}
			}
			else if(str[0]=='=' && str[1]=='='){
				if(n1==n2){
					cout<<"Case "<<i<<": true"<<'\n';
					i++;
				}
				else{
					cout<<"Case "<<i<<": false"<<'\n';
					i++;
				}
			}
			else if(str[0]=='!' && str[1]=='='){
				if(n1!=n2){
					cout<<"Case "<<i<<": true"<<'\n';
					i++;
				}
				else{
					cout<<"Case "<<i<<": false"<<'\n';
					i++;
				}
			}
		}
	}
}
