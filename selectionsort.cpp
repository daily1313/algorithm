#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void selectionsort(int *arr, int len)
{
	int min_idx;
	for(int i=0;i<len-1;i++){
		min_idx = i;
		for(int j=i+1;j<len;j++){
			if(arr[min_idx]>arr[j]){
				min_idx = j;
			}
		}
		swap(arr[min_idx],arr[i]);
	}
}
int main(void)
{
	int arr[5] = {3,5,1,2,4};
	int len = 5;
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<'\n';
	selectionsort(arr,len);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
