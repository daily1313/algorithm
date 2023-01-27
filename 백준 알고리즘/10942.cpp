#include <iostream>

using namespace std;
// Palindrome 알고리즘
// A , A를 뒤집은 것이 같은지 확인 O(N) 
// 문자열, 수열이 앞, 뒤로 같은지 확인 O(N)
// 수열의 길이 M, 총 시간 복잡도 O(MN)
// D[i][j] = A[i] ~ A[j] 가 팰린드롬이면 1, 아니면 0
// 길이가 1인 경우의 팰린드롬은 반드시 팰린드롬이다. D[i][i] == 1
// 길이가 2인 부분 수열은 두 수가 같을 때만 팰린드롬이다.
// D[i][i+1] = 1 (A[i]==A[i+1])
// D[i][i+1] = 0 (A[i]!=A[i+1])
// 길이 3이상
// D[i][j] = 1 (A[i]==A[j] && D[i+1][j-1] == 1)
// 메모리제이션 :  컴퓨터 프로그램이 동일한 계산을 반복해야 할 때, 이전에 계산한 값을 메모리에 저장함으로써 동일한 계산의 반복 수행을 제거하여 프로그램 실행 속도를 빠르게 하는 기술

int d[2001][2001];
int a[2001];
int go(int i, int j) {
    if(i==j) return 1;
    // 길이 1
    else if(i+1 == j) {
        if(a[i] == a[j]) return 1;
        else return 0;
    }
    // 길이 2
    if(d[i][j] >= 0) return d[i][j]; // 메모리제이션
    if(a[i] != a[j]) return d[i][j] = 0;
    else return d[i][j] = go(i+1, j-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int M,N;
    cin>>M;
    for(int i=1;i<=M;i++) 
    {
        cin>>a[i];
    }
    cin>>N;
    memset(d,-1,sizeof(d));
    while(N--)
    {
        int start, end;
        cin>>start>>end;
        if(go(start, end)) cout<<"1"<<'\n';
        else cout<<"0"<<'\n';
    }


}