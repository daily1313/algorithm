#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[4][4]={0};// �迭�� �ʱ�ȭ�� ���־�� �Ѵ�.
	int row = sizeof(arr) / sizeof(arr[0]); // ���� ��
	int col = sizeof(arr[0]) / sizeof(arr[0][0]); // ���� ��
	int i,j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d\n",&arr[i][j]);
		}
	}
	printf("[���� ��]\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("[���� ��]\n");
	for (i=0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", arr[j][i]);//��� ���� ��ġ�� �ٲ��ش�.
		}
		printf("\n");
	}
	

}
