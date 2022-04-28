#include <iostream>
#include <vector>

using namespace std;

int arr[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int j=2;
		while(j<=arr[i]){
					
			if(arr[i]%j==0){
				cout<<j<<' ';
				arr[i]/=j;
			}
			else if(arr[i]%j!=0){
				j++;
			}
		
			
		}
		cout<<'\n';
	}
}
