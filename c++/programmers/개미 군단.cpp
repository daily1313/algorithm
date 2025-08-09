#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int n1 = hp / 5;
    int n2 = hp %  5 / 3;
    int n3 = hp % 5 % 3 / 1;
    
    return n1 + n2 + n3;
}