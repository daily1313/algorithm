#include <iostream>
#include <string>
using namespace std;
char alpha[151];
char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int alphanum[26] = {0};
int main()
{
	string str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		alpha[i] = str[0];
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<26;k++){
			if(alphabet[k]==alpha[j]){
				++alphanum[k];
			}
		}
	}
	int cnt=0;
	for(int m=0;m<26;m++){
		if(alphanum[m]>=5){
			cout<<alphabet[m];
			cnt=1;
		}
		else if(cnt==0 && m==25){
			if(alphanum[m]<5){
				cout<<"PREDAJA"<<'\n';
			}
		}
	}
}

