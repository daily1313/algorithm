#include <stdio.h>

int main(){
	//1~10 ������ �迭
	int arr[10] = {5, 6, 10, 4, 3, 8, 7, 1, 2, 9};
	int i, j, temp, index, min;
	
	for(i=0;i<10;++i){
		//���� ���� ���� ���� ������ ��ġ 
		min = arr[i];
		index = i;
		//���Ͽ� ���� ���� ���� ��ġ��� 
		for(j=i+1;j<10;++j){
			if(min>arr[j]){
				min = arr[j];
				index = j;
			}
		}
		//�񱳰� ������ ��ȯ 
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	//��� 
	for(i=0;i<10;++i){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
