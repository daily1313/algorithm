#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string S,T;

int main()
{
	cin>>S;
	cin>>T;
	bool check = false;
	while(1)
	{
		if(S.size()==T.size())
		{
			if(S==T) 
			{
				check = true;	
			}
			break;
		}
		if(T[T.size()-1]=='A')
			T.pop_back();
		else
		{
			T.pop_back();
			reverse(T.begin(),T.end());
		}
	}
	cout<<check<<'\n';
}
