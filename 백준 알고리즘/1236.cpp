#include <iostream>
#include <cstring>
char str[51][51];
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>str[i][j];
		}
	}
	int cnt=0;
	
	for(int i=0;i<n;i++){
		int x=0;
		for(int j=0;j<m;j++){
			if(str[i][j]=='X'){
				x=1;
			}
			else if(x==0 && j==m-1){
				if(str[i][j]!='X'){
				cnt++;
			}
			}
		}
	}
	cout<<cnt<<'\n';
}
