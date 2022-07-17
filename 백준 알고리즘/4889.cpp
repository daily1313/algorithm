#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	string s;
	stack<char>st;
	int start=1;
	while(cin>>s)
	{
		int cnt=0;
		if(s=="---") break;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='{') st.push(s[i]);
				else if(s[i]=='}')
				{
					if(!st.empty() && st.top()=='{') st.pop();
					else st.push(s[i]);
				}
			}
			while(!st.empty())
			{
				char c1 = st.top();
				st.pop();
				char c2 = st.top();
				st.pop();
				if(c1!=c2) cnt+=2;
				else cnt+=1;
				
			}
			cout<<start<<"."<<' '<<cnt<<'\n';
			start++;
		}
		
		
}

