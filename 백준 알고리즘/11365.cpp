#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<char>str;
	vector <char>::iterator i;
	while(1)
	{
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			str.push_back(s[i]);
		}	
		if(s=="END") break;
		reverse(str.begin(),str.end());
		for(auto i = str.begin(); i!=str.end();i++)
		{
			cout<<*i;
		}
		cout<<'\n';
		str.clear();
	}
	
	
}
