#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin.ignore();
	cin>>t;
	while(t--){
		string str;
		getline(cin,str);
		stack<char>s;
		int i;
		for(char ch:str){
			if(ch==' '|| ch=='\n'){
				while(!s.empty()){
					cout<<s.top();
					s.pop();				
				}
				cout<<ch;
			}else{
				s.push(ch);
			}
			
		}
	} 
}

