#include <iostream>
#include <cmath>
using namespace std;
int x[1025][1025];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>x[i][j];
		}	
	}
	int a,b,c,d;
	
	for(int i=0;i<m;i++)
	{
		unsigned long long int sum=0;
		cin>>a>>b>>c>>d;
		for(int k=a-1;k<=c-1;k++){
			for(int r=b-1;r<=d-1;r++){
				sum+=x[k][r];	
			}
		}
		cout<<sum<<'\n';
	}
	
}
