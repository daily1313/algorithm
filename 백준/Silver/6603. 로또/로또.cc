#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> lotto;

void solve(vector<int> &a, int index, int cnt) {
    if(cnt==6) 
    {
        for(int num : lotto) {
            printf("%d ", num);
        }
        printf("\n");
        return;
    }
    int n = a.size();
    if(n == index) return; // index == n번째 불가능
    lotto.push_back(a[index]);
    solve(a, index+1, cnt+1); // index번째 선택한 경우
    lotto.pop_back();
    solve(a, index+1, cnt); // index번째 선택하지 않은 경우
}
int main()
{
    while(1) {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        solve(a, 0, 0);
        printf("\n");
    }
}