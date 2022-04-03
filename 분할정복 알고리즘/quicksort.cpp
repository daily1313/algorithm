#include <iostream>
#include <vector>
#define LEN 7
using namespace std;

void quicksort(int *data,int l,int r)
{
	int start = l;
	int end = r;
	int pivot = data[(start+end)/2]; // �ǹ����� 
	
	int tmp;
	do
	{
		while(data[start]<pivot){ 
			start++; //left�� pivot���� ū ���� �����ų� pivot�� ���� ������
		}
		while(data[end]>pivot){
			end--; //right�� pivot���� ���� ����  �����ų� pivot�� ���� ������
		}
		if(start<=end){
			tmp = data[start]; // left�� right���� ���ʿ� �ִٸ� ��ȯ
			data[start] = data[end];
			data[end] = tmp;
			start++;
			end--;
		}
	}while(start<=end);
	if(l<end){
		quicksort(data,l,end); // ���� �迭 ��������� �ݺ� 
	}
	if(start<r){
		quicksort(data,start,r); // ������ �迭 ��������� �ݺ�  
	}
}
int main(){
	int i;
	int data[LEN] = {5,6,1,3,4,2,7};
	cout<<"���� ��: "; 
	for(i=0;i<LEN;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	quicksort(data,0,LEN-1);
	cout<<"���� ��: ";
	for(i=0;i<LEN;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	
}
