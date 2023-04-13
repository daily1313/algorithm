#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int k;
int min = 2e9;
vector<int>v;
int cnt = 0;
string getResult(string str, int num) 
{
    while(num >= 1)
    {
        if(num % 2 == 0) str += "4";
        else str += "7";
        num /= 2;
    }
    return str;
}
int main()
{
    cin>>k;

    string ans = getResult("", k+1);
    ans.pop_back();
    reverse(ans.begin(), ans.end());

    cout<<ans<<'\n';
    
}