#include <iostream>
int b[1000001];
int arr[1000001];
using namespace std;
void merge(int a[],int low,int mid, int high)
{
	int i = low;
	int j = mid+1;
	int k =0;
	while(i<=mid && j<=high){
		if(a[i]<=a[j]){
			b[k++]=a[i++];			
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i<=mid){
		b[k++]=a[i++];
	}
	while(j<=high){
		b[k++]=a[j++];
		k--;
	}
	while(k>=0)
	{
		a[low+k]=b[k];
		k--;
	}
}
void mergeSort(int a[],int low, int high)
{
	int mid;
	if(low<high)	
	{
		mid = (low + high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main()
{
	
	int i,cnt;
	cin>>cnt;
	for(int i=0;i<cnt;i++)
	{
		cin>>arr[i];
	}
	mergeSort(arr,0,cnt-1);
	for(i=0;i<cnt;i++)
	{
		cout<<arr[i]<<'\n';
	}
	
	
	
	
	
	
	
	
	
	
	
}
