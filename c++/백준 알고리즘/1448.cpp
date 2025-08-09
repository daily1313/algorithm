#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001];
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+N);
	int mmax=0;
	int t=0;
	for(int i=N-1;i>1;i--){
		if(arr[i]<arr[i-1]+arr[i-2])
		{
			t = arr[i]+arr[i-1]+arr[i-2];
			mmax = max(mmax, t);
		}
	}
	
	if(mmax==0){
		cout<<-1<<'\n';
		return 0;
	}
	else{
		cout<<mmax<<'\n';
		return 0;
	}	
}
