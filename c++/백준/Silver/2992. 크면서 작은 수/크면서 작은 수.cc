#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>v;

int main()
{
    string number;

    cin>>number;

    int num = stoi(number);
    int first = stoi(number);
    do {

        string temp = "";
        for(char x : number) {
            temp += x;
        }
        if(stoi(temp) > num) {
            num = stoi(temp);
            v.push_back(num);
        }

    } while(next_permutation(number.begin(),number.end()));

    sort(v.begin(),v.end());
    if(!v.empty()) 
    {
        cout<<v[0]<<'\n';
        
    }
    else
    {
        cout<<0<<'\n';   
    }
    return 0;

}