#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
bool check;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	vector<char>v;

	for(int i=0;i<a.size();i++)
	{
		v.push_back(a[i]);
		if(v.size()>=b.size())
		{
			bool check = true;
			for(int i=0;i<b.size();i++){
				if(v[v.size()-b.size()+i]!=b[i]) 
				{
				check = false;
				break;
				}
			}
		
		 if(check){
                for (int i = 0; i < b.size(); i++){
                    v.pop_back();
                }
            }
        }
	}
		if(v.size()==0) cout<<"FRULA"<<'\n';
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
	
	
}
