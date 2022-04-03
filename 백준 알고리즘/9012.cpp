#include <iostream>
#include <stack>
#include <string>
using namespace std;
string vaild(string s){
	int cnt = 0;
	int i;
	for(i=0;i<s.size();i++){
		if(s[i]=='('){
			cnt+=1;
		}
		else{
			cnt-=1;
		}
		if(cnt<0){
			return "NO";
		}
	}
	if(cnt==0){
		return "YES";
	}
	else{
		return "NO";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<vaild(s)<<'\n';
	}
	return 0;
}








