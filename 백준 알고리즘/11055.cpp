#include <iostream>
#include <algorithm>

using namespace std;
int d[1001];
int a[1001];
int sum[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;


	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    
    
	int max = 0;
    
	for(int i=0;i<n;i++){
		sum[i]=a[i]; 
		for(int j=0;j<i;j++){
			if(a[j]<a[i]&&sum[i]<sum[j]+a[i]){ 
				sum[i] = sum[j] + a[i];
			} 
			
		}
	}
	
    for(int i=0;i<n;i++)
    {
        if(sum[i]>max) max = sum[i];
    }
    cout<<max;
    
	
}