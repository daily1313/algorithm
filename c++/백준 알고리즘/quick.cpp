#include <iostream>
using namespace std;

int n = 9;
int arr[9] = { 54, 26, 93, 17, 77, 31, 44, 55, 20 };

void quickSort(int* arr, int start, int end) {
	if (start >= end) return; //���Ұ� 1���� �� ����
	int pivot = start;

	int left = start + 1;
	int right = end;

	while (left <= right) {//�����Ǳ� ������ �ݺ�
		while (left <= end && arr[left] <= arr[pivot])
			left++; //pivot���� ū �� ã�� ������ ��� ���������� �̵�
		while (right > start && arr[right] >= arr[pivot])
			right--;
		if (left > right) //�������� �� pivot�� ���� �������� ��ġ ����
			swap(arr[pivot], arr[right]);
		else //�������� �ʾ����� ū ���� ���� �� ��ġ ����
			swap(arr[left], arr[right]);
	}

	//�����Ͽ� �����ʰ� ���� ������ ����
	quickSort(arr, start, right - 1); //���� right��ġ�� pivot�� ������ �� ����
	quickSort(arr, right + 1, end);
}

int main(void) {
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
