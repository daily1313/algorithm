#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char arr[51][51];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int cntrow=0;
	int check;
	for(int i=0;i<n;i++){
		check=0;
		for(int j=0;j<m;j++){
			if(arr[i][j]=='X') check = 1;
			if(j==m-1 && check ==0 && arr[i][j]=='.'){
				cntrow++;
			}
		}
	} 
	int cntcolumn=0;
	for(int j=0;j<m;j++){
		check=0;
		for(int i=0;i<n;i++){
			if(arr[i][j]=='X') check = 1;
			if(i==n-1 && check ==0 && arr[i][j]=='.'){
				cntcolumn++;
			}
		}
	}
	int result = max(cntrow,cntcolumn);
	cout<<result<<'\n';
}
