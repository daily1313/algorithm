#include <iostream>

using namespace std;
int n,k;
int A[10001];
// 선택정렬
// 버블 정렬(bubble sort) 알고리즘의 개념 요약
// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘
// 인접한 2개의 레코드를 비교하여 크기가 순서대로 되어 있지 않으면 서로 교환한다.
// O(N^2)
int change = 0;
void bubble_sort(int A[])
{
    for(int last=n-1;last>=0;last--)
    {
        for(int i=0;i<last;i++)
        {
            if(A[i] > A[i+1]) 
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                change++;
            }
            if(change == k)
            {
                cout<<A[i]<<' '<<A[i+1]<<'\n';
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    bubble_sort(A);

    if(change < k)
    {
        cout<<-1<<'\n';
    }
    return 0;
}