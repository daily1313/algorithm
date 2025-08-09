#include <iostream>
using namespace std;
int a[100001];
int main()
{
	int n;
	
	while(1){
		cin>>n;
		if(n==-1) return 0;
		int sum=0;
		int cnt=0;
		for(int i=1;i<=(n/2);i++){
			if(n%i==0) {
				a[cnt] = i;
				sum+=i;
				cnt++;
			}
		}
		if(sum == n) {
			cout<<n<<" = ";
			for(int i=0;i<cnt;i++){
				if(i==cnt-1){
					cout<<a[i];
					break;
				}
				cout<<a[i]<<" + ";
			}
			cout<<'\n';
		}
		else{
			cout<<n<<" is Not perfect."<<'\n';
		} 
	}
}
