#include <iostream>
#include <cstring>
using namespace std;
char a[100001];
char b[100001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		int cnt=0;
		for(int j=0;j<t;j++)
		{
			cin>>a[j];
		}
		for(int j=0;j<t;j++)
		{
			cin>>b[j];
		}
		for(int k=0;k<t;k++){
			if(a[k]==b[k]){
				continue;
			}
			else{
				if(a[k+1]==b[k+1]){
					cnt+=1;
					continue;
				}
				else{
					k+=1;
					cnt+=1;
					continue;
				}
			}
		}
		cout<<cnt<<'\n';
		
	}
}
