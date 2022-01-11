#include <iostream>
#include <cstring>
using namespace std;
char name[101];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int i,j,k;
	cin>>n;
	int cnt=0;
	for(i=0;i<n;i++){
		cin>>name;
		int len = strlen(name);
		if(len<=2){
			cnt++;
			continue;
		}
		else{
		int v,w;
		for(v=0;v<len-1;v++){
			for(w=v+1;w<len;w++){
				if(name[v]!=name[w]){
					v=len-1;
					continue;
				}
				else if(v==len-2 && w==len-1){
					if(name[v]==name[w]){
						cnt++;
					}
				}
			}
		}
		for(j=0;j<len-2;j++){
			for(k=j+2;k<len;k++){
				if(name[k]==name[j]){
					j=len-2;
					continue;
				}
				if(j==len-3 && k== len-1){
					if(name[j]!=name[k]){
					cnt++;
					}
				}
				
			}
		}
		}
		
		
	}
	cout<<cnt;
}
