#include <iostream>
#include <cstring>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> numbers;
    for(int i=0;i<n;i++)
    {
        string number;
        cin>>number;
        reverse(number.begin(),number.end());
        numbers.push_back(number);
    }

    int length = 1;
    while(1)
    {
        set<string>s;
        for(int i=0;i<n;i++)
        {
            s.insert(numbers[i].substr(0, length));
        }

        if(s.size()==n)
        {
            break;
        }
        else
        {
            length++;
        }
    }

    cout<<length;

    return 0;

    

    
}