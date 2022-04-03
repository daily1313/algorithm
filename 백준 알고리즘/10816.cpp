#include <iostream>

using namespace std;
int x[500001];
int y[500001];
int count[500001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int m;
	cin>>m;
	for(int j=0;j<m;j++){
		cin>>y[j];
	}
	for(int k=0;k<m;k++){
		for(int j=0;j<n;j++){
			if(x[j]==y[k]){
				++count[k];
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<count[i]<<' ';
	}
	cout<<'\n';
	
}
