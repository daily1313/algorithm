#include <iostream>

using namespace std;

bool check[1001]; // 만들 수 있는 로마 숫자 최대값 1000
int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++) {
        for(int v=0;v<=n-i;v++) {
            for(int x=0;x<=n-i-v;x++) {
                int l = n-i-v-x;
                int sum = i+5*v+10*x+50*l;
                check[sum] = true;
            }
        }
    }

    int ans = 0;
    for(int i=1;i<=1000;i++) {
        if(check[i]) ans +=1;
    }
    cout<<ans;
}