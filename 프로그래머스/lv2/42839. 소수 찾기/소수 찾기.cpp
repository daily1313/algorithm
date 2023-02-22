#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    if(num==0 || num==1) return false;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<char>number;
    vector<int>v;
    for(int i=0;i<numbers.size();i++)
    {
        number.push_back(numbers[i]);
    }
    
    sort(number.begin(),number.end());
    
    do {
        string str = "";
        for (auto elem : number)
        {
            str.push_back(elem);
            v.push_back(stoi(str));
        }
    } while(next_permutation(number.begin(),number.end()));
    
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    
    for(int el : v)
    {
        if(isPrime(el)) answer++;
    }
    
    return answer;
}