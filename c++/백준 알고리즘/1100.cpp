#include <iostream>
#include <cstring>
using namespace std;
char chess[9][9];
int main()
{
	int cnt=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>chess[i][j];
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i%2==0){	
			if(j%2==0 && chess[i][j]=='F'){
				cnt++;
			}
			}
			else if(i%2==1){
			if(j%2==1 && chess[i][j]=='F'){
				cnt++;
			}	
			}
			}
		}
	
	cout<<cnt<<'\n';
}
