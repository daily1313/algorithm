#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool consistency(vector<string>v){
	for(int i=0;i<v.size()-1;i++){
		string cur = v[i];
		string next = v[i+1];
		int cnt=0;
		for(int j=0;j<cur.size();j++){
			if(next[j]==cur[j]) cnt++;
		}
		if(cnt == cur.size()) return false; 
	}
	return true;
}
int main()
{
	vector<string>v;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			string num;
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		bool ans = consistency(v);
		if(ans == true) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
		v.clear();	
	}	
}
