#include <iostream>

using namespace std;
int A[500001];
int tmp[500001];
int n, k;
int cnt = 0;
void merge(int A[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int t = 1;
    while(i <= m && j <= r)
    {
        if(A[i] <= A[j])
        {
            tmp[t++] = A[i++];
        }
        else
        {
            tmp[t++] = A[j++];
        }
    }
    while(i <= m) 
    {
        tmp[t++] = A[i++];
    }
    while(j <= r)
    {
        tmp[t++] = A[j++];
    }
    i = l;
    t = 1;
    while(i <= r)
    {
        A[i++] = tmp[t++];
        cnt++;
        if(cnt == k) cout<<tmp[t-1];
    }

}
void merge_sort(int A[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, r);
        merge(A, l, m, r);
    }
}


int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    merge_sort(A, 1, n);
    if(cnt < k) cout<<-1;
    return 0;
}