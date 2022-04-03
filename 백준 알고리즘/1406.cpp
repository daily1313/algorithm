#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
char a[600000];
int main()
{
	cin>>a;
	stack<char>left, right;
	int n= strlen(a);
	int i;
	for(i=0;i<n;i++){
		left.push(a[i]);
	}
	int m;
	cin>>m;
	while(m--){
		char what;
		cin>>what;
		if(what == 'L'){
			if(!left.empty()){
			right.push(left.top());
			left.pop();
		}
		}
		else if(what=='D'){
			if(!right.empty()){
				left.push(right.top());
				right.pop();
			}
		}
		else if(what=='B'){
			if(!left.empty()){
				left.pop();
			}
		}
		else if(what=='P'){
			char c;
			cin>>c;
			left.push(c);
		}
	}
	while(!left.empty()){
		right.push(left.top());
		left.pop();
	}
	while(!right.empty()){
		cout<<right.top();
		right.pop();
	}
	cout<<'\n';
	return 0;
}
