#include <iostream>
#include <stack>
#include <string>
#define endl '\n'
using namespace std;

int main()
{
	int n;
	cin>>n;
	int num = 0;
	for(int i=0;i<n;i++)
	{
		string st;
		cin>>st;
		stack<char>s;
		for(int j=0;j<st.length();j++){
			if(!s.empty()&&s.top()==st[j]){
				s.pop();
				continue;
			}
			s.push(st[j]);
		}
		if(s.empty()){num++;}
	}
	cout<<num<<'\n';
}
