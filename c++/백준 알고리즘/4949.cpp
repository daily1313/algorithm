#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(1)
	{
		string str;
		getline(cin,str);
		stack<char>s;
		bool ans = true;
		
		if(str.length()==1 && str[0]=='.') break;
		for(int i=0;i<str.length();i++){
			if(str[i]=='(' || str[i]=='['){
				s.push(str[i]);
			}
			if(str[i]==')'){
				if(s.empty() ||s.top()=='[') ans = false;
				else s.pop();
			}
			if(str[i]==']'){
				if(s.empty() ||s.top()=='(') ans = false;
				else s.pop();
			}
		}
		if(s.empty()&&ans) cout<<"yes"<<'\n';
		else cout<<"no"<<'\n';
	
	}
	
}
