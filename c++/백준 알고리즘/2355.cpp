#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char alpha[101];
char alpha_a[101];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>alpha>>alpha_a;
		cout<<"Distance: ";
		int len = strlen(alpha);
		for(int j=0;j<len;j++)
		{
			if(alpha[j]<=alpha_a[j]){
			cout<<alpha_a[j]-alpha[j]<<' ';
			}
			else{
				cout<<alpha_a[j]+26-alpha[j]<<' ';
			}
		}
		cout<<'\n';
	}
	
	
	
	
	
}
