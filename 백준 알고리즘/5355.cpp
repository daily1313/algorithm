#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	double a;
	string op;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		getline(cin,op);
		
		for(int j=0;j<op.size();j++){
			if(op[j]=='@') a*=3;
			if(op[j]=='%') a+=5;
			if(op[j]=='#') a-=7;
		}
		cout.setf(ios::fixed);
		cout.precision(2);
		cout<<a<<'\n';
	}
	
}
