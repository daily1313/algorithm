#include <iostream>
 
using namespace std;
 
#define SIZE 5000000
 
int arr[SIZE];
int rrr[SIZE];
 
void merge(int start, int end)
{
    int mid = (start + end) / 2;
    int i = start, j = mid+1, k = start;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) 
            rrr[k++] = arr[i++];
        else
            rrr[k++] = arr[j++];
    }
 
    while (i <= mid)
        rrr[k++] = arr[i++];
    while (j <= end)
        rrr[k++] = arr[j++];
 
    for (int i = start; i <= end; i++) {
        arr[i] = rrr[i];
    }
}
 
void merge_sort(int start, int end) 
{
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(start, mid);
        merge_sort(mid + 1, end);
        merge(start, end);
    }
}
 
int main()
{
    int n,k;
 
    scanf("%d %d", &n, &k);
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    merge_sort(0, n - 1);
 
    printf("%d", arr[k - 1]);
 
    return 0;
}
