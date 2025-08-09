#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string>ex{"aaa","bcd","ab","cded","cd"};
    vector<string>v = ex;
    sort(ex.begin(),ex.end());
    for(auto elem : ex) 
    {
        cout<<elem<<'\n';
    }
    vector<string>str = {"01","1"};
    for(auto a : str)
    {
        cout<<stoi(a)<<'\n';
    }
    
}