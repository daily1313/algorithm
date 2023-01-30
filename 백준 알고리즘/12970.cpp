#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    for(int a=0;a<=n;a++) {
        int b = n - a; // b의 길이 = 전체 길이 - a의 길이
        if(a*b < k) continue;
        vector<int> cnt(b+1);
        for(int i=0;i<a;i++) {
            int x = min(b, k);
            cnt[x] += 1;
            k -= x;
        }
        //cnt[i] = A가 i번 위치에 몇 개 추가되어야 하는가

        for(int i=b;i>=0;i--)
        {
            for(int j=0;j<cnt[i];j++) {
                cout<< 'A';
            }
            if(i>0) {
                cout<<'B';
            }
        }
        cout<<'\n';
        return 0;
    }
    cout<<-1;
}