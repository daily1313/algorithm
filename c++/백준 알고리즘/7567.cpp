#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int start = 10;
	string name;
	getline(cin,name);
	for(int j=0;j<name.size()-1;j++){
		if((name[j]=='(' && name[j+1] == ')') || (name[j]==')' && name[j+1] == '(') ){
			start+=10;
		}
		else if((name[j]=='(' && name[j+1]=='(') || (name[j]==')' && name[j+1]==')')){
			start+=5;
		}
	}
	cout<<start<<'\n';
}
