#include <bits/stdc++.h>

using namespace std;

// string solution(vector<int> numbers) {
    
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     vector<string> v;
    
//     sort(numbers.begin(),numbers.end());
    
//     do {
//         string answer = "";
//         for(int i=0;i<numbers.size();i++) {
            
//             answer += to_string(numbers[i]);
//         }
//         v.push_back(answer);
        
//     } while(next_permutation(numbers.begin(), numbers.end()));
    
//     sort(v.begin(), v.end(),greater<>());
    
//     string result = v[0];
//     return result;
bool cmp(string a, string b){

        return a+b>b+a;
}

string solution(vector<int> numbers) {
    vector<string> vt;
    for(int i=0; i<numbers.size();i++){
        vt.push_back(to_string(numbers[i]));
    }
        string answer = "";
    sort(vt.begin(),vt.end(),cmp);
        if(vt[0].compare("0")==0)
            return "0";
    for(int i=0; i<vt.size();i++){
        answer+=vt[i];
    }
        return answer;
}
