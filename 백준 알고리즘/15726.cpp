#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b && b==c){
		cout<<a*b/c<<endl;
		return 0;
	}
	if(a>b && a>c){
		if(b>c){
			cout<<a*b/c<<endl;
			return 0;
		}
		else{
			cout<<a/b*c<<endl;
			return 0;
		}
	}
	else if(b>a && b>c){
		cout<<a*b/c<<endl;
		return 0;
	}
	else if(c>a && c>b){
		cout<<a/b*c<<endl;
		return 0;
	}
}

