#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int>v;
	int n;
	cin>>n;
	int cnt = 0;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1;i>0;i--){
	
		while(1)
		{
			if(arr[i]>arr[i-1])
			{
				break;
			}
			else
			{
				arr[i-1]--;
				cnt++;
			}
		}
	}
	cout<<cnt<<'\n';
}
