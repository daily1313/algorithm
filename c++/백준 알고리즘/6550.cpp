#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <string>
using namespace std;

int main()
{
		deque<char>d;
		string str1,str2;
		cin>>str1>>str2;
		for(int i=0;i<str1.size();i++)
		{
			d.push_back(str1[i]);
		}
		int min = -1;
		for(int i=0;i<str1.size();i++)
		{	
			for(int j=0;j<str2.size();j++)
			{	
			
				if(d.front()==str2[j])
				{
					if(j>min)
					{
						min = j;
						d.pop_front();
					}
					else break;
					
				}
			}
			
		}
		if(d.empty()) cout<<"Yes"<<'\n';
		else cout<<"No"<<'\n';
	
	
}
