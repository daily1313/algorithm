#include <iostream>
using namespace std;
int number=8;
int sorted[8]; // ���� �迭�� �ݵ�� ���� ������ ����

void merge(int a[],int m,int middle,int n)
{
	int i = m;
	int j = middle +1;
	int k = m;
	// ���� ������� ����
	while(i<=middle && j<=n){
		if(a[i]<=a[j]){
			sorted[k++] = a[i];
			i++;
		}
		else{
			sorted[k++] = a[j];
			j++;
		}
	}
	//���� �����͵� ����
	if(i>middle){
		for(int t=j;t<=n;t++){
			sorted[k++] = a[t];
		}
	}else{
		for(int t=i;t<=middle;t++){
			sorted[k++] = a[t];
		}
	}
	
	//���ĵ� �迭�� ���� 
	for(int t=m;t<=n;t++){
		a[t]=sorted[t];
	}
} 
void mergesort(int a[],int m,int n)
{
	if(m<n){
		int middle = (m+n)/2;
		mergesort(a,m,middle);
		mergesort(a,middle+1,n);
		merge(a,m,middle,n);
	}
}
int main(void)
{
	int array[number] = {7,6,5,8,3,5,9,1};
	mergesort(array,0,number-1);
	for(int i=0;i<number;i++){
		cout<<array[i]<<' ';
	} 
}
/*
[���� ����] �������� ������ �����ϸ鼭 �����Ѵ�
mergeSort(a, m, middle); (left�� �������� ������ ������������ ����ȴ�)
mergeSort(a, middle + 1, n); (right�� left�� ������ ����ȴ�)
merge(a, m, middle, n);  (right�� ������ ������ ����ȴ�)

���� 7 6 5 8 3 5 9 1

1. left�� ����ȴ� 7 6 5 8 -> 7 6 -> 7
2. left�� �������� right�� ����ȴ� 6
3. right�� �������� merge�Լ��� ����ȴ� 7�� 6�� �� �� 6 7�� ����
4. ���ĵ� ������ �ݺ��Ѵ�

��ü���� �������
7 6 5 8 -> 7 6 -> 7 -> 6 -> merge(6, 7) -> 5 8 -> 5 -> 8 -> merge(5, 8) -> merge(5, 6, 7, 8)
                                                                                                                                                      -> merge(1, 3, 5, 5, 6, 7, 8, 9) -> 1 3 5 5 6 7  8 9
3 5 9 1 -> 3 5 -> 3 -> 5 -> merge(3, 5) -> 9 1 -> 9 -> 1 -> merge(1, 9) -> merge(1, 3, 5, 9)
*/
