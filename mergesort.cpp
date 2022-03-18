#include <iostream>
using namespace std;
int number=8;
int sorted[8]; // 정렬 배열은 반드시 전역 변수로 선언

void merge(int a[],int m,int middle,int n)
{
	int i = m;
	int j = middle +1;
	int k = m;
	// 작은 순서대로 삽입
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
	//남은 데이터도 삽입
	if(i>middle){
		for(int t=j;t<=n;t++){
			sorted[k++] = a[t];
		}
	}else{
		for(int t=i;t<=middle;t++){
			sorted[k++] = a[t];
		}
	}
	
	//정렬된 배열을 삽입 
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
[병합 정렬] 절반으로 나누고 병합하면서 정렬한다
mergeSort(a, m, middle); (left는 왼쪽으로 나눌게 없어질때까지 실행된다)
mergeSort(a, middle + 1, n); (right는 left가 끝나면 실행된다)
merge(a, m, middle, n);  (right가 끝나면 병합이 실행된다)

예시 7 6 5 8 3 5 9 1

1. left가 실행된다 7 6 5 8 -> 7 6 -> 7
2. left가 끝났으니 right가 실행된다 6
3. right가 끝났으니 merge함수가 실행된다 7과 6을 비교 후 6 7로 정렬
4. 정렬될 때까지 반복한다

전체적인 실행순서
7 6 5 8 -> 7 6 -> 7 -> 6 -> merge(6, 7) -> 5 8 -> 5 -> 8 -> merge(5, 8) -> merge(5, 6, 7, 8)
                                                                                                                                                      -> merge(1, 3, 5, 5, 6, 7, 8, 9) -> 1 3 5 5 6 7  8 9
3 5 9 1 -> 3 5 -> 3 -> 5 -> merge(3, 5) -> 9 1 -> 9 -> 1 -> merge(1, 9) -> merge(1, 3, 5, 9)
*/
