#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string x,y;
	cin>>x>>y;
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	string ans;
	int a=stoi(x); int b=stoi(y);
	int c= a+b;
	ans = to_string(c);
	reverse(ans.begin(),ans.end());
	cout<<stoi(ans);
}
