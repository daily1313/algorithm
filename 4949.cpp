#include <iostream>
using namespace std;


int main()
{

	int a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;
	if(x>=y)
	{
	if(a*y+b*y>=c*2*y){
		if(c*2*x<a*x+b*x){
			cout<<c*2*x<<'\n';
			return 0;
		}
		else{
		cout<<c*2*y+a*(x-y)<<'\n';
		return 0;
		}
		
	}
	else{
		cout<<a*x+b*y<<'\n';
		return 0;	
	}
	}
	else{
		if(a*x+b*x>=c*2*x){
		if(c*2*y<a*y+b*y){
			cout<<c*2*y<<'\n';
			return 0;
		}
		else{
		cout<<c*2*x+b*(y-x)<<'\n';
		return 0;
		}
		return 0;
	}
	else{
		cout<<a*x+b*y<<'\n';
		return 0;	
	}
	}
}
