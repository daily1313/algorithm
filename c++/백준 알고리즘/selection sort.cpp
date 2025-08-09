#include <stdio.h>

int main(){
	//1~10 무작위 배열
	int arr[10] = {5, 6, 10, 4, 3, 8, 7, 1, 2, 9};
	int i, j, temp, index, min;
	
	for(i=0;i<10;++i){
		//가장 작은 수와 가장 작은수 위치 
		min = arr[i];
		index = i;
		//비교하여 가장 작은 수와 위치기록 
		for(j=i+1;j<10;++j){
			if(min>arr[j]){
				min = arr[j];
				index = j;
			}
		}
		//비교가 끝나면 교환 
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	//출력 
	for(i=0;i<10;++i){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
