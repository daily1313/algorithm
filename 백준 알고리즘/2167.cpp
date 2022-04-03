#include <iostream>
#include <cmath>
using namespace std;
int x[301][301];
int main(void)
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin>>x[i][j];
		}	
	}
	int a,b,c,d;
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int sum=0;
		cin>>a>>b>>c>>d;
		for(int k=a-1;k<=c-1;k++){
			for(int r=b-1;r<=d-1;r++){
				sum+=x[k][r];	
			}
		}
		cout<<sum<<'\n';
	}
	
}

