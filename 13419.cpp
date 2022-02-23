#include <iostream>
#include <string>
using namespace std;
char a[26];
char b[26];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		int two=0;
		int one=0;
		if(str.length()%2==1){
			for(int r=0;r<str.length()/2+1;r++){
				a[r]=str[2*r];
			}
			for(int l=str.length()/2+1;l<str.length();l++){
				a[l]=str[2*two+1];
				two++;
			}
			for(int e=0;e<str.length()/2;e++){
				b[e]=str[2*e+1];
			}
			for(int m=str.length()/2;m<str.length();m++){
				b[m]=str[2*one];
				one++;
			}
			for(int h=0;h<str.length();h++){
				cout<<a[h];
			}
			cout<<'\n';
			for(int u=0;u<str.length();u++){
				cout<<b[u];
			}
			cout<<'\n';
		}
		else{
		for(int j=0;j<str.length()/2;j++){
			a[j]=str[2*j];
			b[j]=str[2*j+1];
		}
		for(int k=0;k<str.length()/2;k++){
			cout<<a[k];
		}
		cout<<'\n';
		for(int m=0;m<str.length()/2;m++){
			cout<<b[m];
		}
		cout<<'\n';
		}
	}
}
