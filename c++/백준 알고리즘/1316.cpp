#include <iostream>
#include <string>
using namespace std;
void check(string a);
int cnt=0;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int i,j,k;
	cin>>n;
	string name;
	for(i=0;i<n;i++){
		cin>>name;
		check(name);
	}
	cout<<cnt;
	return 0;
		
		
		cout<<cnt;	
}
void check(string str)
{
	int len = str.length();
	int j,k;
	for(j=0;j<len-2;j++)
	{
		if(str[j]!=str[j+1]){
		
			for(k=j+2;k<len;k++){
			if(str[j]==str[k]){
				return;
			}
			}
		}
	}
	cnt++;	
}
