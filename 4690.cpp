#include <iostream>
using namespace std;

int main()
{
	int a=0;
	int b,c,d;
		while(a!=100){
			for(int b=2;b<100;b++){
				for(int c=b+1;c<=100;c++){
					for(int d=c+1;d<=100;d++){
						if(a*a*a==b*b*b+c*c*c+d*d*d){
							cout<<"Cube = "<<a<<", "<<"Triple = ("<<b<<","<<c<<","<<d<<")"<<endl;
						}
					}
				}
			}
			a++;
		}
	
}
