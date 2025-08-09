#include <string>
#include <iostream>
#include <vector>
using namespace std;

string eight[8] = {"000","001","010","011","100","101","110","111"};

int main(){
    string s;
    cin >> s;
    if(s=="0") cout<<"0";
    string ans = "";
	bool start = true;
	
    for (int i=0; i<s.length(); i++) 
    {
        int n = s[i]-'0';
        
        if (start == true && n < 4) 
        {
            if (n == 0)
                continue;
            else if(n == 1)
                ans +="1";
            else if (n == 2) 
                ans +="10";
            else if (n == 3)
                ans +="11";
                
            start = false;
        } 
        else 
        {
            ans += eight[n];
            start = false;
        }
    }
    cout<<ans;
}
