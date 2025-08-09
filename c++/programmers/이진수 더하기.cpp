#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";

    if(bin1 == "0" && bin2 == "0") return "0";
    bitset<10> bit1(bin1);
    bitset<10> bit2(bin2);

    int n1 = bit1.to_ulong();
    int n2 = bit2.to_ulong();
    int result = n1 + n2;

    while(result) 
    {
        answer += ((result % 2) + '0');
        result /= 2;
    }
    reverse(answer.begin(),answer.end());

    return answer;
}