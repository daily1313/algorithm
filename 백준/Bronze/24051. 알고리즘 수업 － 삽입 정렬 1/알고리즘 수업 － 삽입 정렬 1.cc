#include <iostream>

using namespace std;
int A[10001];
int N, K;
// 삽입 정렬은 두 번째 자료부터 시작하여 그 앞(왼쪽)의 자료들과 비교하여 삽입할 위치를 지정한 후 자료를 뒤로 옮기고 지정한 자리에 자료를 삽입하여 정렬하는 알고리즘이다.
// 즉, 두 번째 자료는 첫 번째 자료, 세 번째 자료는 두 번째와 첫 번째 자료, 네 번째 자료는 세 번째, 두 번째, 첫 번째 자료와 비교한 후 자료가 삽입될 위치를 찾는다. 
// 자료가 삽입될 위치를 찾았다면 그 위치에 자료를 삽입하기 위해 자료를 한 칸씩 뒤로 이동시킨다

int change = 0;
void insertion_sort(int A[])
{
    for(int i=1; i<N; i++)
    {
        int loc = i-1;
        int newItem = A[i];

        while(loc>=0 && newItem < A[loc]) {
            A[loc+1] = A[loc];
            change++;
            loc--;
            if(change == K)
            {
                cout<<A[loc+1]<<'\n';
                return;
            }
        } 
        if(loc+1 != i)
        { 
            A[loc+1] = newItem;
            change++;
            if(change == K)
            {
                cout<<A[loc+1]<<'\n';
                return;
            }
        }
        
    }
}

int main()
{
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    insertion_sort(A);
    if(change < K) cout<<-1<<'\n';
    return 0;
}