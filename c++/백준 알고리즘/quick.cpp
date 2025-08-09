#include <iostream>
using namespace std;

int n = 9;
int arr[9] = { 54, 26, 93, 17, 77, 31, 44, 55, 20 };

void quickSort(int* arr, int start, int end) {
	if (start >= end) return; //원소가 1개일 때 종료
	int pivot = start;

	int left = start + 1;
	int right = end;

	while (left <= right) {//전복되기 전까지 반복
		while (left <= end && arr[left] <= arr[pivot])
			left++; //pivot보다 큰 걸 찾을 때까지 계속 오른쪽으로 이동
		while (right > start && arr[right] >= arr[pivot])
			right--;
		if (left > right) //엇갈렸을 때 pivot과 작은 데이터의 위치 변경
			swap(arr[pivot], arr[right]);
		else //엇갈리지 않았으면 큰 수와 작은 수 위치 변경
			swap(arr[left], arr[right]);
	}

	//분할하여 오른쪽과 왼쪽 각각을 실행
	quickSort(arr, start, right - 1); //현재 right위치에 pivot이 있으니 그 왼쪽
	quickSort(arr, right + 1, end);
}

int main(void) {
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
