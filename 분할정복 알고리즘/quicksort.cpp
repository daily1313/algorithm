#include <iostream>
#include <vector>
#define LEN 7
using namespace std;

void quicksort(int *data,int l,int r)
{
	int start = l;
	int end = r;
	int pivot = data[(start+end)/2]; // 피벗설정 
	
	int tmp;
	do
	{
		while(data[start]<pivot){ 
			start++; //left가 pivot보다 큰 값을 만나거나 pivot을 만날 때까지
		}
		while(data[end]>pivot){
			end--; //right가 pivot보다 작은 값을  만나거나 pivot을 만날 때까지
		}
		if(start<=end){
			tmp = data[start]; // left가 right보다 왼쪽에 있다면 교환
			data[start] = data[end];
			data[end] = tmp;
			start++;
			end--;
		}
	}while(start<=end);
	if(l<end){
		quicksort(data,l,end); // 왼쪽 배열 재귀적으로 반복 
	}
	if(start<r){
		quicksort(data,start,r); // 오른쪽 배열 재귀적으로 반복  
	}
}
int main(){
	int i;
	int data[LEN] = {5,6,1,3,4,2,7};
	cout<<"정렬 전: "; 
	for(i=0;i<LEN;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	quicksort(data,0,LEN-1);
	cout<<"정렬 후: ";
	for(i=0;i<LEN;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	
}
