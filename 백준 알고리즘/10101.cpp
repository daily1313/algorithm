#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b+c>180 || a+b+c<=0){
		cout<<"Error"<<endl;
		return 0;
	}
	else if(a+b+c==180 && (a==b && b==c && c==a)){
		cout<<"Equilateral"<<endl;
		return 0;
	}
	else if(a+b+c==180 && ((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a))){
		cout<<"Isosceles"<<endl;
		return 0;
	}
	else if(a+b+c==180 && (a!=b && b!=c && c!=a)){
		cout<<"Scalene"<<endl;
		return 0;
	}

}
