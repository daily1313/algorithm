#include <iostream>
#define ll long long
using namespace std;
/*
long long, long long int, signed long long, signed long long int    
-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 의 범위 인 자료형들입니다.

시그마 공식을 사용해서 풉니다.
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    ll sum = 0;
    cin >> a >> b;
    if(a<b)
        sum = b * (b + 1) / 2 - (a) * (a - 1) / 2;
    else
        sum = a * (a + 1) / 2 - (b) * (b - 1) / 2;
    cout << sum << '\n';
}