#include <iostream>
#include <cstring>
char a[101];
int s=0;
int l=0;
int total=0;
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		if(a[j]=='S'){
			s++;
		}
		else if(a[j]=='L'){
			l++;
		}
	}
	if(l==0){
		cout<<s<<'\n';
	}
	else{
		total = s+l-((l/2)-1);
		cout<<total<<'\n';
	}
}
