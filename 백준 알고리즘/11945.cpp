#include <iostream>
#include <cstring>
using namespace std;
char a[10][10];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m/2;j++){
			temp= a[i][j];
			a[i][j]=a[i][m-1-j];
			a[i][m-1-j]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j];
		}
		cout<<'\n';
	}
	
}
