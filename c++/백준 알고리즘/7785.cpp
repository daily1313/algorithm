#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string>v;
	set<string>st;
	for(int i=0;i<n;i++)
	{
		string name,attend;
		cin>>name>>attend;
		if(attend=="enter"){
			st.insert(name);
		}
		else{
			st.erase(name);
		}
	}
	for(auto it= st.begin();it!=st.end();it++){
		v.push_back(*it);
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<'\n';
	}
}
