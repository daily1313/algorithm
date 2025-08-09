#include <iostream>
using namespace std;
int t[46];
int main()
{
	int i;
	for(int i=0;i<=45;i++){
		t[i]= (i+1)*(i+2)/2;
	}
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>n;
		int cnt=0;
		for(int x=0;x<46;x++){
			for(int y=0;y<46;y++){
				for(int z=0;z<46;z++){
					if(t[x]+t[y]+t[z]==n){
						cnt++;
					}
				}
			}
		}
		if(cnt==0) cout<<0<<endl;
		else cout<<1<<endl;
		cnt = 0;
	}
}
