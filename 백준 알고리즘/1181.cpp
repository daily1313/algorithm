#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
	if(a.size()==b.size()){
		return a<b;
	}else{
		return a.size()<b.size();
	}
}
int main()
{
	vector<string>a;
	string tmp;
	int n;
	cin>>n;
	string arr;
	for(int i=0;i<n;i++)
	{
		cin>>arr;
		a.push_back(arr);
	}
	sort(a.begin(),a.end(),compare);
	for(int i=0;i<n;i++){
		if(tmp==a[i]) continue;
		cout<<a[i]<<'\n';
		tmp=a[i];
	}
	return 0;
	
	
	
	
}
