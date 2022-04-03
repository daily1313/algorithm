#include <iostream>
#include <string>
using namespace std;
char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str1, str2;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str1>>str2;
		int count1[26]={0};
		int count2[26]={0};
		for(int j=0;j<str1.length();j++){
			for(int k=0;k<26;k++){
				if(str1[j]==alpha[k]) 
				{
				++count1[k];
				continue;
				}
			}
		}
		for(int a=0;a<str2.length();a++){
			for(int b=0;b<26;b++){
				if(str2[a]==alpha[b]) 
				{
				++count2[b];
				continue;
				}
			}
		}
		for(int u=0;u<26;u++){
			if(count1[u]!=count2[u]){
				cout<<str1<<" & "<<str2<<" are Not anagrams."<<'\n';
				break;
			}
			else if(u==25 && count1[u]==count2[u]){
				cout<<str1<<" & "<<str2<<" are anagrams."<<'\n';
				break;
			}
		}
		
	}
	
}
