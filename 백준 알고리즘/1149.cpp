#include <iostream>
#include <algorithm>
using namespace std;
int a[1001][3];
int d[1001][3];
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<=n; i++) {
        d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + a[i][2];
    }
    int min1 = min(d[n][0],d[n][1]);
    int min2 = min(d[n][1],d[n][2]);
    int min3 = min(min1,min2);
    cout << min3<< '\n';
    return 0;
}
