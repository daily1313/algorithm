#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[4][4]={0};// 배열은 초기화를 해주어야 한다.
	int row = sizeof(arr) / sizeof(arr[0]); // 행의 수
	int col = sizeof(arr[0]) / sizeof(arr[0][0]); // 열의 수
	int i,j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d\n",&arr[i][j]);
		}
	}
	printf("[변경 전]\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("[변경 후]\n");
	for (i=0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", arr[j][i]);//행과 열의 위치를 바꿔준다.
		}
		printf("\n");
	}
	

}
