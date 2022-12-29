#include <string>
#include <vector>

using namespace std;

int combi(int n, int r) {
    if (r == 0 || n == r) {
            return 1;
    } else {
            return combi(n-1, r-1) + combi(n-1, r);
    }
}

int solution(int balls, int share) {
    return combi(balls, share);
}