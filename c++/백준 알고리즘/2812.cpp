#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool check;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, k;
	cin>>n>>k;
	vector<char>v;
	vector<char>v2;
	string num;
	cin>>num;
	for(int i=0;i<n;i++){
		v.push_back(num[i]);
	}
	int i=0;
	for(i=0;i<num.size();i++){
		while(k && !v2.empty() && v2.back()<v[i]){
			v2.pop_back();
			k--;
		}
		v2.push_back(v[i]);
	}
	while(k--){
		v2.pop_back();
	}
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i];
	}
}
